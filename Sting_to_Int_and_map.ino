void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}
 String Data;
 int PWM_Val,x;
void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0){
  Data = Serial.readString();
 }
 PWM_Val = Data.toInt();
 x =map(PWM_Val, 0,100,0,255);
 analogWrite(3,x);
  

}
