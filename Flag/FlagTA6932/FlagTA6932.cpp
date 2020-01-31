#include "FlagTA6932.h"

FlagTA6932::FlagTA6932(int dataPin, int clkPin, int stbPin) {
	STB = stbPin;
	CLK = clkPin;
	DIN = dataPin;
	pinMode(STB, OUTPUT);
	pinMode(CLK, OUTPUT);
	pinMode(DIN, OUTPUT);
}

void FlagTA6932::begin() {
  digitalWrite(STB, 1);  
  digitalWrite(DIN, 1);  
  digitalWrite(CLK, 1);  
}

void  FlagTA6932::SendOneByte(byte byt)
{
  byte tmp;
  byte i = 0;

  tmp = byt;

  for(i = 0;i < 8;i++)
  {
    digitalWrite(DIN, tmp & 0x01);

    digitalWrite(CLK, 0);
    digitalWrite(CLK, 1);
    
    tmp = tmp >> 1;
  }
}

void  FlagTA6932::SendCmd(byte cmd)
{
  digitalWrite(STB, 1);      //先產生一個STB的下降沿
  digitalWrite(STB, 0);

  SendOneByte(cmd);

  digitalWrite(STB, 1);
}

void  FlagTA6932::SendGroupData(byte startAddr,byte* arr,byte len)
{
  byte i;

  digitalWrite(STB, 1);      //先產生一個STB的下降沿
  digitalWrite(STB, 0);

  SendOneByte(startAddr);      //發送起始地址
    
  for(i = 0;i < len;i++)
  {
    SendOneByte(arr[i]);     //循環發送多個數據
	Ledrow[startAddr - 192 + i] = arr[i];
  }

  digitalWrite(STB, 1);      //先產生一個STB的下降沿
}

void  FlagTA6932::SendOneData(byte addr,byte cha)
{
  digitalWrite(STB, 1);      //先產生一個STB的下降沿
  digitalWrite(STB, 0);

  SendOneByte(addr);       //發送起始地址
  SendOneByte(cha);        //發送數據
  Ledrow[addr - 192] = cha;
  digitalWrite(STB, 1);
}

void  FlagTA6932::UpdateMultiLine(byte color,byte startRow,byte* arr,byte len)
{
	if (color == 0 | color == 2) {
		byte startAddr;

		startAddr = (0xC0 | (0x0F & startRow)); //先計算出起始地址
												//0xC0|:因為6932要求顯示地址前四位必須為1100
												//正常來講，每一位對應兩個字節

		ADDRESS_MODE_INC;               //發送地址模式命令
		SendGroupData(startAddr, arr, len);  //發送起始地址和連續的數據
		DISPLAY_ON(LightLevel);           //打開顯示
	}
	if (color == 1 | color == 2) {
		byte startAddr;

		startAddr = (0xC0 | (0x0F & startRow+8)); //先計算出起始地址
												//0xC0|:因為6932要求顯示地址前四位必須為1100
												//正常來講，每一位對應兩個字節

		ADDRESS_MODE_INC;               //發送地址模式命令
		SendGroupData(startAddr, arr, len);  //發送起始地址和連續的數據
		DISPLAY_ON(LightLevel);           //打開顯示
	}
   
}

void  FlagTA6932::UpdateRedFrame(byte* arr)
{
   UpdateMultiLine(0,0,arr,8);         
}

void  FlagTA6932::UpdateGreenFrame(byte* arr)
{
   UpdateMultiLine(1,0,arr,8);         
}

void  FlagTA6932::UpdateRedAndGreenFrame(byte* arr)
{
   UpdateMultiLine(0,0,arr,16);          
}

void  FlagTA6932::UpdateOneLine(byte color,byte row,byte c)
{
	if (color == 0 | color == 2) {
		byte addr = 0;

		addr = (0xC0 | (0x0f & row)); //先計算出起始地址

		ADDRESS_MODE_FIX;            //發送地址模式命令
		SendOneData(addr, c);  //發送起始地址和連續的數據
		DISPLAY_ON(LightLevel);      //打開顯示		
	}
	if (color == 1 | color == 2) {
		byte addr = 0;

		addr = (0xC0 | (0x0f & row+8)); //先計算出起始地址

		ADDRESS_MODE_FIX;            //發送地址模式命令
		SendOneData(addr, c);  //發送起始地址和連續的數據
		DISPLAY_ON(LightLevel);      //打開顯示	
	}

}

void  FlagTA6932::Clear()
{
	UpdateRedAndGreenFrame(Alloff);
}

void  FlagTA6932::SetLightLevel(byte l)
{
	LightLevel = l; //設定亮度，範圍為0~7
	SET_LIGHT_LEVEL(LightLevel);
}

void  FlagTA6932::SetLed(byte color,byte row,byte col,bool state)
{
	byte arr=1;
	for (int i = 0; i < (7 - col); i++) {
		arr *= 2;
	}
	if (color == 0 | color == 2) {
		byte tmp = Ledrow[row];
		bool flag = 0;
		byte i = 128;
		if (tmp >= arr) {
			while (i >= 1) {
				if (tmp >= i) {
					if (i == arr) {
						flag = 1;
						break;
					}
					tmp -= i;
				}
				i /= 2;
			}
		}

		if (state == 1) {
			if (flag == 0) {
				UpdateOneLine(0, row, Ledrow[row] + arr);
			}
		}
		else {
			if (flag == 1) {
				UpdateOneLine(0, row, Ledrow[row] - arr);
			}
		}
	}
	if (color == 1 | color == 2) {
		byte tmp = Ledrow[row+8];
		bool flag = 0;
		byte i = 128;
		if (tmp >= arr) {
			while (i >= 1) {
				if (tmp >= i) {
					if (i == arr) {
						flag = 1;
						break;
					}
					tmp -= i;
				}
				i /= 2;
			}
		}

		if (state == 1) {
			if (flag == 0) {
				UpdateOneLine(1, row, Ledrow[row+8] + arr);
			}
		}
		else {
			if (flag == 1) {
				UpdateOneLine(1, row, Ledrow[row+8] - arr);
			}
		}
	}
	
	
}

