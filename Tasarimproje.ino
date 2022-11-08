//#include "deneyap.h"
#include <Servo.h>
Servo myservo;
#define GREEN_LED 8
char d;
int pos = 0; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//pinMode(10,OUTPUT);
pinMode(8,OUTPUT);
myservo.attach(10); 
  myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  d=Serial.read();
}
if(d=='a')
{
  Serial.print(d);
  delay(50);
    
    for(pos=0;pos<=90;pos+=1)
  {
    myservo.write(pos);
    digitalWrite(GREEN_LED, HIGH);
   delay(20);
   }
   delay(5000);
    
    for(pos=90;pos>=0;pos-=1)
   { 
   myservo.write(pos);
   digitalWrite(GREEN_LED, LOW);
   delay(20);
   }
   delay(50000000);
   }
   //d="";

}
