int led_pin=3;
int analog_pin=5;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,INPUT);
}

void loop() {
  digitalWrite(analog_pin,HIGH);
  if (digitalRead(10)==HIGH)
  {digitalWrite(led_pin,HIGH);
  delay(1000);
  digitalWrite(led_pin,LOW);
  delay(1000);}
}
