#include <FlagTA6932.h>

FlagTA6932 myLED(2,3,4);

byte Ledon[8] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
byte Ledoff[8] = {0};
byte Letter[8][8] = {{
  0x10,0x28,0x44,0x44,0x7C,0x44,0x44,0x44},//A
  {0x00,0xFC,0x66,0x66,0xEC,0x66,0x66,0xFC},//B
  {0x00,0xEC,0x34,0x30,0x30,0x30,0x34,0xE8},//C
  {0x00,0xFC,0x66,0x66,0x66,0x66,0x66,0xFC},//D
  {0x00,0xFC,0x64,0x60,0xE8,0x60,0x64,0xFC},//E
  {0x00,0xFC,0x64,0x60,0xE8,0x60,0x60,0xF0},//F
  {0x00,0xEC,0x34,0x30,0x30,0xBE,0x3C,0xEC},//G
  {0x00,0x77,0x66,0x66,0xEE,0x66,0x66,0x77} //H
 };

byte i;

void setup() {
  myLED.begin(); 
}

void loop() {
  //讓所有紅色LED亮
  myLED.UpdateRedFrame(Ledon); 
  myLED.UpdateGreenFrame(Ledoff);  
  delay(1000);
  myLED.UpdateRedFrame(Ledoff);  
  //讓所有綠色LED亮
  myLED.UpdateGreenFrame(Ledon); 
  delay(1000);
  myLED.UpdateGreenFrame(Ledoff);      
  //紅色綠色全亮
  myLED.UpdateGreenFrame(Ledon); 
  myLED.UpdateRedFrame(Ledon); 
  delay(1000);
  //紅色綠色全滅
  myLED.UpdateGreenFrame(Ledoff);  
  myLED.UpdateRedFrame(Ledoff);  
  delay(1000);
  
  //讓紅色LED逐行點亮
  for(i=0;i<8;i++)
  {
    myLED.UpdateOneLine(i+1,0xFF);
    delay(300);
    myLED.UpdateRedFrame(Ledoff);  
  }
  //讓綠色LED逐行點亮
  for(i=0;i<8;i++)
  {
    myLED.UpdateOneLine(i+9,0xFF);
    delay(300);
    myLED.UpdateGreenFrame(Ledoff);  
  }
  //循環顯示紅色A-H八個字母
  for(i=0;i<8;i++)
  {
    myLED.UpdateRedFrame(Letter[i]);
    delay(1000);
  }
  myLED.UpdateRedFrame(Ledoff);  
  //循環顯示綠色A-H八個字母
  for(i=0;i<8;i++)
  {
    myLED.UpdateGreenFrame(Letter[i]);
    delay(1000);
  }
  myLED.UpdateGreenFrame(Ledoff);
}
