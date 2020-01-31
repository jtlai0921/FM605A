void setup() {  //"{"表示setup()函式由此開始
  pinMode(LED_BUILTIN, OUTPUT);  //將內建LED腳位設為OUTPUT模式
}  //"}"表示函式到此結束

void loop() {  //"{"表示loop()函式由此開始
  digitalWrite(LED_BUILTIN, HIGH);  //將高電位輸出到內建LED腳位
  delay(500);  //使程式暫停500毫秒, 維持在上一行所執行的狀態
  digitalWrite(LED_BUILTIN, LOW);  //將低電位輸出到內建LED腳位
  delay(500);  //使程式暫停500毫秒, 維持在上一行所執行的狀態
}  //"}"表示函式到此結束

