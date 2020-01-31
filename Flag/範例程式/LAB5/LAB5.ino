#include "FlagTA6932.h"
FlagTA6932 myLED(12,9,8);//建立一個新的LED矩陣
int row=6;  //列的位置
int col=3;    //行的位置
bool UporDown=1; //UP:1 DOWN:0
bool LorR=0;    //Left:1 Right:0

void setup() {
  myLED.begin();  //初始化
  myLED.SetLightLevel(3); //設定亮度為3
  myLED.Clear();  //清除螢幕
  myLED.SetLed(0, row, col, 1);//點亮當前球位
  myLED.UpdateOneLine (1,0,255); //點亮最上排
  myLED.UpdateOneLine (1,7,255); //點亮最下排
}

void loop() {
  if(UporDown==1){  //如果球往上
    row=row-1;  //列數-1
    if(row==0){ //如果列數已經碰到上界
      row=2;  //列數設為2
      UporDown=0; //球方向往下
    }
  }
  else{   //如果球往下
    row=row+1;  //列數+1
    if(row==7){ //如果列數已經碰到下界
      row=5;  //列數設為5
      UporDown=1; //球方向往上
    }
  }
  if(LorR==0){  //如果球往右
    col=col+1;  //行數+1
    if(col==8){ //如果已經到達右界
      col=6;  //行數設為6
      LorR=1;   //球往左
    }
  }
  else{   //如果球往左
    col=col-1;    //行數-1
    if(col==-1){  //如果已經到達左界
      col=1;  //行數設為1
      LorR=0; //球往右
    }
  }
  for(int i=1;i<7;i++){ //熄滅前一個球位
    myLED.UpdateOneLine (0,i,0);
  }
  myLED.SetLed(0, row, col, 1);//點亮當前球位
  delay(100);
}

