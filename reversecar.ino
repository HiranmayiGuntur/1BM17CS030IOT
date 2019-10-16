#include<LiquidCrystal.h>
int buzzer=13;
const int trigPin=3;
const int echoPin=2;
LiquidCrystal lcd (8,9,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
 lcd.setCursor(6,6);
 Serial.begin(9600);
 pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 long duration,inches,cm;
 lcd.setCursor(0,1);
 pinMode(trigPin,OUTPUT);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 pinMode(echoPin,INPUT);
 duration=pulseIn(echoPin,HIGH);
 inches=microsecondsToInches(duration);
 cm=microsecondsToCentimeters(duration);
 if(inches<3)
 {
   Serial.println("close");
  digitalWrite(buzzer,HIGH);
 }
 else
 {
   Serial.println("far");
  digitalWrite(buzzer,LOW);
 }
 lcd.print(inches);
 lcd.print("in");
 lcd.print(cm);
 lcd.print("cm");
 Serial.println(inches);
 Serial.println("in");
 Serial.println(cm);
 Serial.println("cm");
 delay(1000);
}
long microsecondsToInches(long microseconds)
{
  return microseconds/74/2;
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds/29/2;
}
