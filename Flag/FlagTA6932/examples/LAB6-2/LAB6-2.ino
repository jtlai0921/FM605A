#include "FlagTA6932.h"
FlagTA6932 myLED(12,9,8);//建立一個新的LED矩陣
int row=0;  //列的位置
int col=0;    //行的位置

void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(2, INPUT_PULLUP); //使用上拉電阻
  attachInterrupt(0, int0, FALLING); //使用中斷
  pinMode(13,OUTPUT);
  digitalWrite(13,0);//將PIN13腳位設為GND
  myLED.begin();  //初始化
  myLED.SetLightLevel(3); //設定亮度為3
  myLED.Clear();  //清除螢幕
  myLED.SetLed(2, row, col, 1);// 點亮光點當前位置
}

void loop() {
  if(analogRead(A0) >650 && col<7){   //如果搖桿x軸向右
    col+=1; //行數+1
  }
  else if(analogRead(A0) <10 && col>0){ //如果搖桿x軸向左
    col-=1; //行數-1
  }
  if(analogRead(A1) >650 && row<7){ //如果搖桿y軸向下
    row+=1; //列數+1
  }
  else if(analogRead(A1) <10  && row>0){  //如果搖桿y軸向上
    row-=1; //列數-1
  }
  myLED.Clear();  //清除螢幕
  myLED.SetLed(2, row, col, 1); //點亮光點當前位置
  delay(300); //暫停300毫秒
}

void int0(){
  row=0;  //列數歸零
  col=0;  //行數歸零
  myLED.Clear();  //清除螢幕
  myLED.SetLed(2, row, col, 1); //點亮光點當前位置
}

