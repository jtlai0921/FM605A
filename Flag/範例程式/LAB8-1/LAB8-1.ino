void setup()
{
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(10,0);//將腳位10設為GND
}

void loop()
{
  digitalWrite(11,HIGH);
  delayMicroseconds(1916);
  digitalWrite(11,LOW);
  delayMicroseconds(1916); 
}


