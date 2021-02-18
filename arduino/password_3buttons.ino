#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
const int code[]={1,3,2};
int input[3];
int counter=0;
void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
}

void loop(){
    int button1val=digitalRead(10);
    int button2val=digitalRead(11);
    int button3val=digitalRead(12);
  if(button1val==LOW){
      input[counter]=1;
      counter=counter+1;
      delay(200);
      for (int i=0;i<3;i++){
        Serial.print(input[i]);}}
    else if(button2val==LOW){
      input[counter]=2;
      counter=counter+1;
      delay(200);
      for (int i=0;i<3;i++){
        Serial.print(input[i]);}}
    else if(button3val==LOW){
      input[counter]=3;
      counter=counter+1;
      delay(200);
      for (int i=0;i<3;i++){
        Serial.print(input[i]);}}
    else if(counter==3){
      counter=0;}
  
  if (input[0]==0 || input[1]==0 || input[2]==0){
      lcd.setCursor(0, 0);
      lcd.print("Sifre giriniz");}
    else if(input[0]==code[0] && input[1]==code[1] && input[2]==code[2]){
      lcd.clear();
      lcd.print("Sifre dogru");
      digitalWrite(9,HIGH);
      delay(5000);
      for (int j=0;j<3;j++){
        input[j]=0;}}
    else{
      lcd.clear();
      lcd.print("Sifre yanlis");
      digitalWrite(8,HIGH);
      delay(2000);
        for (int j=0;j<3;j++){
        input[j]=0;}}
  }
