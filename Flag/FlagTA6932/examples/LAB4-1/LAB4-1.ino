#include "FlagTA6932.h"
FlagTA6932 myLED(12,9,8);//建立一個新的LED矩陣
int row=6;   //列的位置
int col=3;    //行的位置
bool color=0;  //顏色

void setup() {
  myLED.begin();  //初始化
  myLED.SetLightLevel(3); //設定亮度為3
  myLED.Clear();  //清除螢幕
}

void loop() {
  myLED.SetLed (color, row, col, 1); //點亮指定的LED
  delay(500); //暫停500毫秒
  myLED.SetLed (color, row, col, 0); //熄滅指定的LED
  delay(500);   //暫停500毫秒
  color=!color; //顏色轉換
}


