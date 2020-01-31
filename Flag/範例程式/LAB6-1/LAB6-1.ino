int  x;  //x軸數值
int  y; //y軸數值
bool sw=0; //按鈕狀態
void setup() {
  pinMode(A0,INPUT);//X軸腳位
  pinMode(A1,INPUT);//Y軸腳位
  pinMode(2, INPUT_PULLUP); //使用上拉電阻
  attachInterrupt(0, int0, FALLING); //使用中斷
  pinMode(13,OUTPUT);
  digitalWrite(13,0);//將PIN13腳位設為GND
  Serial.begin(9600);
}

void loop() {
  x=analogRead(A0); //將A0類比腳位讀取到的數值存進x
  y=analogRead(A1);   //將A1類比腳位讀取到的數值存進y
  Serial.print("x="); //以序列埠送出資料"x"
  Serial.println(x); 
  Serial.print("y="); //以序列埠送出資料"y"
  Serial.println(y); 
  Serial.print("sw=");  //以序列埠送出資料"按鈕狀態"
  Serial.println(sw);
  delay(300);
}
void int0(){    //中斷執行程式
  sw=!sw; //狀態轉換
}

