int outputpin=A0;

void setup() {
  
  pinMode(outputpin,INPUT);
  Serial.begin(9600);
  

}

void loop() {
  int voltage= analogRead(outputpin);
  float mv=(voltage/1024.0)*5000;
  float c=mv/10;
  Serial.print("Celsius:");
  Serial.println(c);
  delay(1000);

}
