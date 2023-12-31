#include <SoftwareSerial.h>
#include <Servo.h>
#define BTtx 2
#define BTrx 3
Servo myServo;

SoftwareSerial BT(BTtx , BTrx);

int servoPos = 0 ;

void setup() {
  myServo.attach(9);
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(BT.available()>0){
    servoPos = BT.read();
    Serial.println(servoPos);
  }
  if(servoPos != 0){ // 0이라는 쓰레기값이 계속전달되서 예외처리함.
    myServo.write(servoPos);
  }
}
