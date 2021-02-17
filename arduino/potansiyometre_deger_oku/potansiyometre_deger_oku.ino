int analog_deger;
  void setup() {
  Serial.begin(9600);
}

void loop() {
  analog_deger=analogRead(A0);
  Serial.println(analog_deger);
  delay(500);

}
