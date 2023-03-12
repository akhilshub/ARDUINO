// C++ code
#include<Servo.h>
Servo myservo;
int val;
void setup()
{
  myservo.attach(9);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(1);
  Serial.println(val);
  val=map(val,0,1023,0,180);
  myservo.write(val);
  delay(0);
}