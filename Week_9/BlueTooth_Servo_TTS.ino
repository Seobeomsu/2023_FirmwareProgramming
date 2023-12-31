#include <SoftwareSerial.h>
#include <Servo.h>

#define BTtx 2
#define BTrx 3
#define pin_Servo 13
Servo myservo;

SoftwareSerial BT(BTtx,BTrx); // BT(2,3);
char data = 'F';

void setup() {
  myservo.attach(pin_Servo);
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(BT.available()>0){
    data = BT.read();
    Serial.println(data);
  }
  if(data == 'A'){
    myservo.write(0);
  }else if(data == 'B'){
    myservo.write(90);
  }else if(data == 'C')
    myservo.write(180);
}
