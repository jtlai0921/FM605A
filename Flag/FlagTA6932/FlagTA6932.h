#ifndef _FLAGTA6932_H_
#define _FLAGTA6932_H_

#include <avr/pgmspace.h>

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

//#define LightLevel 0x02                       //設置顯示亮度，設置值從0x03到0x07
#define DISPLAY_ON(LightLevel) SendCmd(0x88|(0x07&LightLevel)) //打開顯示
#define DISPLAY_OFF SendCmd(0x80)      //關閉顯示
#define ADDRESS_MODE_INC SendCmd(0x40) //設置顯示模式，0x40:普通模式、寫數據到顯示
                                              //寄存器，地址自增模式
#define ADDRESS_MODE_FIX SendCmd(0x44) //設置顯示模式，0x44：普通模式，寫數據到顯示
                                              //寄存器，固定地址模式
#define SET_LIGHT_LEVEL(LightLevel) SendCmd(0x88|(0x07&LightLevel))
                                              //設置亮度等級，打開顯示
							   
class FlagTA6932 {
	private :
		int STB;
		int CLK;
		int DIN;
		byte LightLevel = 2;
		byte Alloff[16] = { 0 };
		byte Ledrow[16] = { 0 };
	public:
		FlagTA6932(int dataPin, int clkPin, int stbPin);
		void begin();
		void SendOneByte(byte byt);
		void SendCmd(byte cmd);
		void SendGroupData(byte startAddr, byte* arr, byte len);
		void SendOneData(byte addr, byte cha);
		void UpdateMultiLine(byte color, byte startRow, byte* arr, byte len);
		void UpdateRedFrame(byte* arr);
		void UpdateGreenFrame(byte* arr);
		void UpdateRedAndGreenFrame(byte* arr);
		void UpdateOneLine(byte color, byte row, byte c);
		void Clear();
		void SetLightLevel(byte l);
		void SetLed(byte color, byte row, byte col, bool state);
};
#endif
