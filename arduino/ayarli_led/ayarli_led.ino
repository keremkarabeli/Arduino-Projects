int analog_deger;
int kirmizi_pin=2,sari_pin=3, yesil_pin=4;
  void setup() {
  pinMode(kirmizi_pin,OUTPUT);
  pinMode(sari_pin,OUTPUT);
  pinMode(yesil_pin,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

  void loop() {
    analog_deger= analogRead(A0);
    Serial.println(analog_deger);
    delay(100);
    if (analog_deger<=341 && analog_deger>0){
    digitalWrite(kirmizi_pin,HIGH);
    digitalWrite(sari_pin,LOW);
    digitalWrite(yesil_pin,LOW);
  }
    else if (analog_deger>341 && analog_deger<=682){
    digitalWrite(kirmizi_pin,LOW);
    digitalWrite(sari_pin,HIGH);
    digitalWrite(yesil_pin,LOW);
    }
    else if (analog_deger>682){
    digitalWrite(kirmizi_pin,LOW);
    digitalWrite(sari_pin,LOW);
    digitalWrite(yesil_pin,HIGH);
    }
    else{
    digitalWrite(kirmizi_pin,LOW);
    digitalWrite(sari_pin,LOW);
    digitalWrite(yesil_pin,LOW);
      }

}
