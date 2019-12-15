void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3, 255);
  delay(3000);
  analogWrite(3, 204);
  delay(3000);
  analogWrite(3, 127);
  delay(3000);
  analogWrite(3, 63);
  delay(3000);
  analogWrite(3, 12);
  delay(3000);
  

}
