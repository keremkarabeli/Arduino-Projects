int yesil=2,sari=3,kirmizi=4,buton=5;
void setup() {
pinMode(yesil,OUTPUT);
pinMode(sari,OUTPUT);
pinMode(kirmizi,OUTPUT);
pinMode(buton,OUTPUT);
pinMode(8,INPUT);
}

void loop() {
  digitalWrite(buton,HIGH);
  if(digitalRead(8)==HIGH){
    digitalWrite(kirmizi,HIGH);
    delay(7000);
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,HIGH);
    delay(2000);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,HIGH);
    delay(10000);
    digitalWrite(yesil,LOW);
}

}
