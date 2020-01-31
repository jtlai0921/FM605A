#include "FlagTA6932.h"
FlagTA6932 myLED(12,9,8);//建立一個新的LED矩陣
int row=3;    //列數
int col=1;    //行數
/////////////////////parameter/////////////////
const int action=4;//動作 1:左 2:右 3:上 4:下
const int state=36;//狀態
const int comrate=70;//完成率
const int comnum=100;//完成數
///////////////////////////////////////////////
int Q[state][action];//Q-learning矩陣
int cordecide[state];//學習成功矩陣
int memory[500];     //記憶矩陣
int sizeofmemory=0; //當前記憶大小
int output=0;       //AI決定輸出值
int pos=12;        //當前位置
int rannum=0;       //亂數

void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  randomSeed(analogRead(A5));//產生亂數子
  /////////製作Q初始矩陣/////////////
  for (int i=0;i<state;i++){
    for(int j=0;j<action;j++){
      Q[i][j]=11;
    }
  }
  //////////////////////////////////// 
  myLED.begin();  //初始化
  myLED.SetLightLevel(3); //設定亮度為3
  myLED.Clear();  //清除螢幕
  myLED.UpdateOneLine(0,0,255);  //點亮最上排的燈
  myLED.UpdateOneLine(0,7,255);  //點亮最下排的燈
  for(int i=1;i<7;i++){//點亮最左排與最右排的燈
    myLED.SetLed(0, i, 0, 1); myLED.SetLed(0, i, 7, 1); 
  }
  myLED.SetLed(1, row, col, 1);//點亮當前位置
  delay(1000);
}

void loop() {  
  output=AIaction();//AI決定值
  if(output==1&& col>1){  //決定值等於1，往左
    col-=1;
  }
  else if(output==2&& col<6){ //決定值等於2，往右
    col+=1;
  }
  else if(output==3&& row>1){   //決定值等於3，往上
    row-=1;
  }
  else if(output==4&& row<6){ //決定值等於4，往下
    row+=1;
  }
  pos=6*(row-1)+(col-1);  //計算當前位置
  for(int i=1;i<7;i++){ //清除前一點
    for(int j=1;j<7;j++){
      myLED.SetLed(0, i, j, 0);
    }
  }
  myLED.SetLed(0, row, col, 1);//點亮當前位置
  delay(50);
  if(pos==17){
    delay(300);
    p_reward(10,5,2); //獎勵
    row=3;    //列數
    col=1;    //行數
    pos=12;
    myLED.SetLed(0, row, col, 1);//點亮當前位置
    delay(50);
  }
  else if(pos==23){
    delay(300);
    n_reward(5,5,1);  //懲罰
    row=3;    //列數
    col=1;    //行數
    pos=12;
    myLED.SetLed(0, row, col, 1);//點亮當前位置
    delay(50);
  }
}///////////主程式結束///////////////

void p_reward(int learn_rate, const int re_step ,const int discount){ //notice!! learn_rate must ≧re_step*discount
    ////preward//正回饋//(學習效率,學習步數,折扣)
    for(int i=sizeofmemory-2;i>(sizeofmemory-(re_step*2));i-=2){
      if(i>=0){
        Q[memory[i]][memory[i+1]-1]+=learn_rate; 
      }
      learn_rate-=discount;
    }
   
    for(int i=0;i<sizeofmemory;i++){
      memory[i]=0;
    }
    sizeofmemory=0;

    //////////////prewardend
}

void n_reward(int learn_rate, const int re_step ,const int discount){ //notice!! learn_rate must ≧re_step*discount
  ////nreward//負回饋//(學習效率,學習步數,折扣)
   for(int i=sizeofmemory-2;i>(sizeofmemory-(re_step*2));i-=2){
      if(i>=0&&((Q[memory[i]][memory[i+1]-1])-learn_rate)>0){
        Q[memory[i]][memory[i+1]-1]-=learn_rate; 
      }
     learn_rate-=discount;
   }

   for(int i=0;i<sizeofmemory;i++){
    memory[i]=0;
  }
  sizeofmemory=0;
 
  ///////////////nrewardend
}

int AIaction(){
  int dtotal=0; //該位置的action總量
  int noutput;  //此次輸出
  
////計算該位置的action總量///  
  for(int i=0;i<action;i++){  
   dtotal=dtotal+Q[pos][i];
  }
//////////////////////////////

  int maxQ=0; //最大action

///////////大於完成數////////
  if(dtotal>comnum){
   for(int i=1;i<action;i++){
     if(Q[pos][i]>Q[pos][maxQ]){ //求最大action
        maxQ=i;
     }    
   }
   if( ((Q[pos][maxQ]*100.0f)/dtotal) >comrate){ //檢驗是否高於設定完成率
     for(int i=0;i<action;i++){  //大於完成率, 清空該位置action矩陣
      Q[pos][i]=0;
    }
    cordecide[pos]=maxQ+1; //將最大action值存進確定矩陣
    dtotal=0;
   }
   else{ 
    dtotal=0;
    for(int i=0;i<action;i++){  //小於完成率, 縮小矩陣
      Q[pos][i]=Q[pos][i]/10+1;
      dtotal=dtotal+Q[pos][i];
    }
   } 
}//end if dtotal>comnum

/////////檢驗當前位置action總值////
if(dtotal==0){  //action總值=0
  noutput=cordecide[pos]; //此次輸入為確定矩陣值
}
else{   //action矩陣不為0
  int start=0; //定位點 
  rannum=random(dtotal);  //取action範圍的亂數
  for(int i=0;i<action;i++){
    if(rannum>=start && rannum<(start+Q[pos][i])){
      noutput=i+1;
    }
    start+=Q[pos][i]; //定位
  }
  memory[sizeofmemory]=pos; //將位置存進記憶矩陣
  memory[sizeofmemory+1]=noutput; //將輸出存進記憶矩陣
  sizeofmemory=sizeofmemory+2;  //標記矩陣大小
  if(sizeofmemory==500){ //防止矩陣過大
    sizeofmemory=0;
  }
}
  return noutput; //回傳輸出值
}

