void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  int x;
  x = digitalRead(2);
  digitalWrite(3, x);sc
}
