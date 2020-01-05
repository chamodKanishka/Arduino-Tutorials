#define Echopin 12
#define Trigpin 13
void setup() {
  // put your setup code here, to run once:
  pinMode(Echopin, INPUT);
  pinMode(Trigpin, OUTPUT);
  pinMode(2, OUTPUT);

  Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
  int duration,distance;
  digitalWrite(Trigpin,HIGH);
  delay(1);
  digitalWrite(Trigpin,LOW);

  duration= pulseIn(Echopin, HIGH);

  distance=(duration/2)*(1/29.1);
  if(distance<20){
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
  
  Serial.println(distance);
  delay(500);
}
