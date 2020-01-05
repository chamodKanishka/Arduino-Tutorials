#define ENA 11
#define IN1 8
#define IN2 9
#define IN3 12
#define IN4 13
#define ENB 10
#define TrigF 4
#define EchoF 5
#define TrigL 6
#define EchoL 7
void setup() {
  // put your setup code here, to run once:
  analogWrite(EN1,150);
  analogWrite(EN2,150);
  pinMode(TrigF,OUTPUT);
  pinMode(EchoF,INPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);

}

void loop() {
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);

  int duration, distance;
  digitalWrite(TrigL,HIGH);
  delay(1);
  digitalWrite(TrigL,LOW);

  duration= pulseIn(EchoF,HIGH); // Name of the pin and the name of the state that we wanna measure the time

  distance= (duration/2)*(1/29.1);
  if( distance >=15 && distance<20){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    delay(20);
    
  }
  if(distance < 15){
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    delay(10);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    delay(10);
  }
  if(distance > 20){
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    delay(10);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    delay(10);
  }

//  if(distance>=20){
//    digitalWrite(IN1,HIGH);
//    digitalWrite(IN2,LOW);
//    delay(300)
////    digitalWrite(IN1,HIGH);
////    digitalWrite(IN2,HIGH);
////    digitalWrite(IN1,HIGH);
////    digitalWrite(IN2,HIGH); 
////    delay(50); 
//     
//    
//    }else{
//
//    digitalWrite(IN1,HIGH);
//    digitalWrite(IN2,LOW);
//    digitalWrite(IN3,HIGH);
//    digitalWrite(IN4,LOW);
//    delay(50);
//     //FORWARD
//    }
 

}
