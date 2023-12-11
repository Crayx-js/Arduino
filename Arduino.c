
// C++ code

#include <Servo.h>
Servo monservo;
int angle;

void setup()
{
Serial.begin(9600);
monservo.attach(9);
}

void loop()
{
  if(Serial.available()>0){
    angle=Serial.parseInt();
	monservo.write(angle);
    Serial.println("POSITION DU SERVO:");Serial.println(angle);
    delay(500);
  }
}