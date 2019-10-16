#include<Servo.h>
Servo s;
int input = A0;
int output = 9;

void setup()
{
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  s.attach(output);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(input);
  Serial.println(value);
}
