#include<SoftwareSerial.h>
String readData;
SoftwareSerial BT(10,11);
int pin=13;
void setup() 
{
pinMode(pin,OUTPUT);
digitalWrite(pin,HIGH);

BT.begin(9600);
Serial.begin(9600);
}

void loop() 
{



while(BT.available())
{
  delay(10);
  char c=BT.read();
  readData += c;
}

if(readData.length()>=0)
{
  Serial.println(readData);
  readData ="";
}

delay(1000);

}
