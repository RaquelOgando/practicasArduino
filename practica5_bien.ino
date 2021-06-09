#include <Servo.h>
Servo myservo;

const int buttonPin = 6;
int val;
int buttonState = 0;

void setup()
{
  myservo.attach(9);
  pinMode(buttonPin,INPUT); 
}

void loop(){
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    val = 90;
  }else{
    val = 0;
  }
  myservo.write(val);
  delay(15);
}
