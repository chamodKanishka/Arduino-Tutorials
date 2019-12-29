void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);

}

String x;
void loop() {
  // put your main code here, to run repeatedly:
  if( Serial.available() > 0){
    x=Serial.readString();
    if( x == "on"){
      digitalWrite(2, HIGH);
    }
    else if( x == "off"){
      digitalWrite(2, LOW);
    }
  }

}
