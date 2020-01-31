#include "FlagTA6932.h"
FlagTA6932 myLED(12,9,8);//建立一個新的LED矩陣
int row=6;  //列的位置
int col=3;    //行的位置
int board_pos=2;  //球板位置
bool Reset=0;
bool UporDown=1; //UP:1 DOWN:0
bool LorR=0;    //Left:1 Right:0
int action=0;   //搖桿狀態

void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(13,OUTPUT);
digitalWrite(13,0);//將PIN13腳位設為GND
myLED.begin();  //初始化
myLED.SetLightLevel(3); //設定亮度為3
myLED.Clear();  //清除螢幕
myLED.UpdateOneLine(0,0,255); //點亮第0列一整排的燈
myLED.SetLed(1, row, col, 1);//點亮當前球位
myLED.SetLed(2, 7, board_pos, 1); myLED.SetLed(2, 7, board_pos, 1); myLED.SetLed(2, 7, board_pos, 1);//點亮球板
}

void loop() {
  if(Reset==1){
    myLED.UpdateOneLine(1,6,0);//清除失誤點
    if(col==7){
      myLED.SetLed(1, 7, 6, 1);//顯示失誤落點
    }
    else{
      if(LorR==1){
        myLED.SetLed(1, 7, col-1, 1);//顯示失誤落點
      }
      else{
        myLED.SetLed(1, 7, col+1, 1);//顯示失誤落點
      }
    }
    delay(500);
    myLED.UpdateOneLine(2,7,0);//清除板子和球
    row=6;col=3;LorR=0;//重置位置
    board_pos=2;
    myLED.SetLed(2, 7, board_pos, 1); myLED.SetLed(2, 7, board_pos+1, 1); myLED.SetLed(2, 7, board_pos+2, 1);
    myLED.SetLed(1, row, col, 1);//顯示球位置
    Reset=0;
    delay(300);
  }
  else if(Reset==0){ 
    if(UporDown==1){
      row=row-1;
    if(row==0){
      row=2;
      UporDown=0;
    }
    }
    else{
      row=row+1;
    if(row==7){
      row=5;
      UporDown=1;
    }
    }
    if(LorR==0){
    col=col+1;
    if(col==8){
    col=6;
    LorR=1;
    }
    }
    else{
      col=col-1;
      if(col==-1){
        col=1;
        LorR=0;
      }
      }
      for(int i=1;i<7;i++){ //熄滅前一個球位
        myLED.UpdateOneLine (1,i,0);
      }
      myLED.SetLed(1, row, col, 1);//點亮當前球位
      
      if(analogRead(A0)>650){//如果搖桿往右
        action=1;
      }
      else if(analogRead(A0)<10){ //如果搖桿往左
        action=2;
      }
      else{//如果搖桿沒反應
        action=0;
      }
      
      if(action==1 && board_pos<5){
        board_pos +=1;
      }
      else if(action==2 && board_pos>0){
        board_pos -=1;
      }
      
      myLED.UpdateOneLine(2,7,0);
      myLED.SetLed(2, 7, board_pos, 1); myLED.SetLed(2, 7, board_pos +1, 1); myLED.SetLed(2, 7, board_pos +2, 1);
      
      if(row==6){
        if(col==1){
          if(board_pos==0|board_pos==1|(board_pos==2&&LorR==0) ){
            Reset=0;
          }
          else{
            Reset=1;
          }      
        }
        else if(col==3){
          if(board_pos==1|board_pos==2|board_pos==3|(board_pos==0&&LorR==1)|(board_pos==4&&LorR==0) ){
            Reset=0;
          }
          else{
            Reset=1;
          } 
        }
        else if(col==5){
          if(board_pos==3|board_pos==4|board_pos==5|(board_pos==2&&LorR==1) ){
            Reset=0;
          }
          else{
            Reset=1;
          } 
        }
        else if(col==7){
          if(board_pos==4|board_pos==5){
            Reset=0;
          }
          else{
            Reset=1;
          } 
        }
      }
  }
  delay(100);
}

