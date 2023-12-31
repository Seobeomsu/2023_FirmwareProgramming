#include <SoftwareSerial.h>

#define BTtx 2
#define BTrx 3
#define LED_Red 13
#define LED_Green 12
#define LED_Blue 11

SoftwareSerial BT(BTtx,BTrx); // BT(2,3);
char data = 'F';

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
}

void loop() {
  if(BT.available()>0){
    data = BT.read();
  }
  if(data == 'R'){
    digitalWrite(LED_Red,HIGH);
    digitalWrite(LED_Green,LOW);
    digitalWrite(LED_Blue,LOW);
  }
  else if(data == 'G'){
    digitalWrite(LED_Red,LOW);
    digitalWrite(LED_Green,HIGH);
    digitalWrite(LED_Blue,LOW);
  }else if(data == 'B'){
    digitalWrite(LED_Red,LOW);
    digitalWrite(LED_Green,LOW);
    digitalWrite(LED_Blue,HIGH);
  }else if(data == 'F'){
    digitalWrite(LED_Red,LOW);
    digitalWrite(LED_Green,LOW);
    digitalWrite(LED_Blue,LOW);
  }
}
