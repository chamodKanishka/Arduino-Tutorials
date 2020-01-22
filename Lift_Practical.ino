void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int p_val, r_val;

  if(digitalRead(2) == 0){
    p_val =1;
  }
  if(digitalRead(3) == 0){
    p_val =2;
  }
  if(digitalRead(4) == 0){
    p_val =3;
  }
  if(digitalRead(5) == 0){
    p_val =4;
  }
  if(digitalRead(9) == 1){
    r_val =1;
  }
  if(digitalRead(8) == 1){
    r_val =2;
  }
  if(digitalRead(7) == 1){
    r_val =3;
  }
  if(digitalRead(6) == 1){
    r_val =4;
  }

  if(p_val > r_val){
    digitalWrite(9, LOW);
    digitalWrite(10,HIGH);
    
  }
  else if(p_val < r_val){
    digitalWrite(11, LOW);
    digitalWrite(10,HIGH);
    
  }
  else{
    digitalWrite(10, LOW);
    digitalWrite(11,LOW);
    
  }
  

}
