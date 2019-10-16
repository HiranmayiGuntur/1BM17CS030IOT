int ledPin=13;
int analogPin=0;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(analogPin,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int ldrvalue1=analogRead(analogPin);
  Serial.print("current:");
  Serial.println(ldrvalue1);
  delay(1000);
  int threshold=150;
  if(ldrvalue1<threshold)
  
  digitalWrite(ledPin,HIGH);
  else
  digitalWrite(ledPin,LOW);
  // put your main code here, to run repeatedly:

}
