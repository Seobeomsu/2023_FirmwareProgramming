#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
int LAZER = 8;

SoftwareSerial BT(BTtx , BTrx);

char data = 'B';

void setup(){
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LAZER , OUTPUT);
}

void loop(){
  if(BT.available()>0){
    data = BT.read();
  }
  if(data == 'B'){
    digitalWrite(LAZER , HIGH);
    delay(100);
    digitalWrite(LAZER , LOW);
    delay(100);
    digitalWrite(LAZER , HIGH);
    delay(100);
    digitalWrite(LAZER , LOW);   
    delay(100);
    digitalWrite(LAZER , HIGH);
    delay(300); 
  }
  if(data == 'T'){
    digitalWrite(LAZER , HIGH);
  }
  if(data == 'F'){
    digitalWrite(LAZER , LOW);
  }
}