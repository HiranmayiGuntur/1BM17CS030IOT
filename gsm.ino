#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); 
void setup() 
{ 
  mySerial.begin(9600);   
  Serial.begin(9600);     
  delay(100); 
} 

void loop() 
{ 
  if (Serial.available()>0) 
 /* switch(Serial.read())   
  { 
    case 's': SendMessage(); 
              break; 
    case 'r': RecieveMessage(); 
              break;  
  }*/Serial.println("Sending Message");
mySerial.println("AT+CMGF=1");    
delay(10);  
mySerial.println("AT+CMGS=\"+919880055660\"\r");   
delay(10); 
mySerial.println("I am SMS from GSM Module"); 
delay(10); 
mySerial.println((char)26);
delay(10);  
  if (mySerial.available()>0) 
  Serial.write(mySerial.read()); 
                
}


/*void RecieveMessage() 
{
  mySerial.println("AT+CNMI=2,2,0,0,0");  
  delay(1000);  
}*/
