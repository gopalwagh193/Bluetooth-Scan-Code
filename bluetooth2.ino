#include<SoftwareSerial.h>
char c;
SoftwareSerial BT(10,11);
int pin=13;
void setup() 
{
pinMode(pin,OUTPUT);
digitalWrite(pin,LOW);

BT.begin(9600);
Serial.begin(9600);
}

void loop() 
{


if(BT.available()>0)
{
  c=BT.read();
  Serial.println(c);
}

if(c=='1')
{
  digitalWrite(pin,HIGH);
  
}
else if(c=='0')
{
  digitalWrite(pin,LOW);
}
delay(1000);

}
