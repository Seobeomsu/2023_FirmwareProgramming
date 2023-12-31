#include <SoftwareSerial.h>
#include <Servo.h>

int LED_Red = 13;
Servo myServo;
int BT_TX = 10;
int BT_RX = 11;
SoftwareSerial BT(BT_TX, BT_RX);
int value = 0;

void setup(){
  myServo.attach(9);
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(LED_Red,OUTPUT);
}

void loop(){
  if(BT.available()>0){
    int servoPos = BT.read();
    Serial.println(servoPos);
    myServo.write(servoPos);
    value = servoPos;
  }
  if(value >= 90){
    digitalWrite(LED_Red, HIGH);
  }else{
    digitalWrite(LED_Red, LOW);
  }
}