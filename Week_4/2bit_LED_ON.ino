#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
#define LED_Red 13
#define LED_Blue 12
SoftwareSerial BT(BTtx, BTrx); 
//BT(2,3);
char data = ‘F';
void setup(){
BT.begin(9600);
Serial.begin(9600);
pinMode(LED_Red, OUTPUT);
pinMode(LED_Blue, OUTPUT);
}

void loop(){
  if(BT.available()>0){
    data = BT.read();
  }
  if(data == 'T'){
    digitalWrite(LED_Red, LOW);
    Serial.println("LED OFF");
  }else if(data == 'F'){
    digitalWrite(LED_Red, HIGH);
    Serial.println("LED ON"); 
  }else if(data == 'A'){
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Blue, HIGH);
    Serial.println("LED OO"); 
  }else if(data == 'B'){
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_blue, LOW);
    Serial.println("LED OX"); 
  }else if(data == 'C'){
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Blue, HIGH);
    Serial.println("LED XO"); 
  }else if(data == 'D'){
    digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Blue, LOW);
    Serial.println("LED XX"); 
  }
}