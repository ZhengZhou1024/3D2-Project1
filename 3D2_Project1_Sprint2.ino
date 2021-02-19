/*
3D2_Project1_Sprint2_Montion
modified by zheng zhou Feb 2021
*/
#include <Servo.h>

Servo myservo;  

int val;    

void setup() {
  myservo.attach(11);  
}

void loop() {
  val = analogRead(A0);            
  val = map(val, 0, 1023, 0, 180); 
  myservo.write(val);          
  delay(15);                           
}
