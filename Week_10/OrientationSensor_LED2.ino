#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
#define LED_Red 13
#define LED_Green 12
SoftwareSerial BT(BTtx , BTrx);

char data = 'F';

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
}

void loop() {
  if(BT.available()>0){
    data = BT.read();
  }
  Serial.print(data);
  if(data == 'D'){
    digitalWrite(LED_Red , LOW);
    digitalWrite(LED_Green , LOW);
    Serial.println("LED XX");
  }else if(data == 'C'){
    digitalWrite(LED_Red , HIGH);
    digitalWrite(LED_Green , LOW);
    Serial.println("LED OX");
  }else if(data == 'B'){
    digitalWrite(LED_Red , LOW);
    digitalWrite(LED_Green , HIGH);
    Serial.println("LED XO");
  }else if(data == 'A'){
    digitalWrite(LED_Red , HIGH);
    digitalWrite(LED_Green , HIGH);
    Serial.println("LED OO");    
  }else if(data == 'F'){
    digitalWrite(LED_Red , LOW);
    digitalWrite(LED_Green , LOW);
    Serial.println("LED XX");    
  }
}
