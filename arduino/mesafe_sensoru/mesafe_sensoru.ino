int trigPin=9, echoPin=8,buzzerPin=7;
float sure, mesafe;
void setup(){

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  sure=pulseIn(echoPin,HIGH);
  mesafe=(sure/2)*0.03423;
  Serial.println("Mesafe: ");
  Serial.println(mesafe);
  
  if (mesafe<=15){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(mesafe*10);
    digitalWrite(buzzerPin,LOW);
    delay(mesafe*10);
    }
  else if(mesafe>15 && mesafe<=30){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(buzzerPin,HIGH);
    delay(mesafe*10);
    digitalWrite(buzzerPin,LOW);
    delay(mesafe*10);
    }
  else if(mesafe>30 && mesafe<=50){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(buzzerPin,HIGH);
    delay(mesafe*10);
    digitalWrite(buzzerPin,LOW);
    delay(mesafe*10);
    }
  else{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(buzzerPin,LOW);
  }
}
