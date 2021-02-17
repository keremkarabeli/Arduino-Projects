void setup(){ 
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop(){

  for (int i=2;i<7;i++){
  digitalWrite(i,HIGH);
  delay(90);
  digitalWrite(i,LOW);
    if (i==6){
      for (int x=6;x>1;x--){
    digitalWrite(x,HIGH);
    delay(90);
    digitalWrite(x,LOW);}
   }
    else{
      continue;}
  }
}
