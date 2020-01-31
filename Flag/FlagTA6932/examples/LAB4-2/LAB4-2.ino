#include "FlagTA6932.h"
FlagTA6932 myLED(12,9,8); //建立一個新的LED矩陣

void setup() {
myLED.begin();  //初始化
myLED.SetLightLevel(3); //設定亮度為3
myLED.Clear();  //清除螢幕
}

void loop() {
//數字1//
myLED.SetLed(0, 1, 4, 1);
myLED.SetLed(0, 2, 3, 1); myLED.SetLed(0, 2, 4, 1);
myLED.SetLed(0, 3, 4, 1);
myLED.SetLed(0, 4, 4, 1);
myLED.SetLed(0, 5, 4, 1);
myLED.SetLed(0, 6, 4, 1);
myLED.SetLed(0, 7, 3, 1); myLED.SetLed(0, 7, 4, 1); myLED.SetLed(0, 7, 5, 1); 
delay(500);  //暫停500毫秒
myLED.Clear();  // 清除螢幕

//數字2//
myLED.SetLed(1, 1, 3, 1); myLED.SetLed(1, 1, 4, 1); 
myLED.SetLed(1, 2, 2, 1); myLED.SetLed(1, 2, 5, 1);
myLED.SetLed(1, 3, 5, 1);
myLED.SetLed(1, 4, 4, 1);
myLED.SetLed(1, 5, 3, 1); 
myLED.SetLed(1, 6, 2, 1); 
myLED.SetLed(1, 7, 2, 1); myLED.SetLed(1, 7, 3, 1); myLED.SetLed(1, 7, 4, 1); myLED.SetLed(1, 7, 5, 1);
delay(500);   //暫停500毫秒
myLED.Clear();  // 清除螢幕

//數字3//
myLED.SetLed(2, 1, 3, 1); myLED.SetLed(2, 1, 4, 1);
myLED.SetLed(2, 2, 2, 1); myLED.SetLed(2, 2, 5, 1);
myLED.SetLed(2, 3, 5, 1);
myLED.SetLed(2, 4, 4, 1);
myLED.SetLed(2, 5, 5, 1);
myLED.SetLed(2, 6, 2, 1); myLED.SetLed(2, 6, 5, 1);
myLED.SetLed(2, 7, 3, 1); myLED.SetLed(2, 7, 4, 1);
delay(500);   //暫停500毫秒
myLED.Clear();// 清除螢幕
}

