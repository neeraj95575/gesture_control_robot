//Receiver code 
#include<SoftwareSerial.h>
SoftwareSerial mybt(2,3);
char m=0,n=0;

int enA = 5; // SPEED CONTROL
int enB = 6;

void setup() {
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);

pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
  
Serial.begin(9600);
mybt.begin(9600);
}

void loop() {
if(mybt.available()>0)
{
m= mybt.read();
Serial.println(m);
if(m=='F')

{
analogWrite(enA, 150);
analogWrite(enB, 150);

digitalWrite(10, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);

}

else if(m=='B')

{
analogWrite(enA, 150);
analogWrite(enB, 150);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);

}

else if(m=='R')

{
analogWrite(enA, 150);
analogWrite(enB, 150);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);

}
else if(m=='L')

{
analogWrite(enA, 150);
analogWrite(enB, 150);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);

}

else if(m=='s')

{
analogWrite(enA, 150);
analogWrite(enB, 150);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);

}
else

{
analogWrite(enA, 150);
analogWrite(enB, 150);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);

}

} }
