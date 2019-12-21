#include<Servo.h>

Servo myservo1;
Servo myservo2;
void setup() {
  // put your setup code here, to run once:
  myservo1.attach(4);
  //myservo1.write(80);
  myservo2.attach(5);
  //myservo2.write(80);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x;
  int y;
  x = analogRead(0);
  y = analogRead(0);
  int Anglex = map(x, 0, 1023, 0, 180);
  int Angley = map(y, 0, 1023, 0, 180);
  myservo1.write(Anglex);
  myservo2.write(Angley);
  delay(10);

}
