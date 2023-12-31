#include <IRremote.h>
#include <Servo.h>
#define Up 24
#define OK 28
#define Left 8
#define Right 90

#define IR_RECEIVE_PIN 8

Servo myservo;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  myservo.attach(7);
}

void loop() {
  if (IrReceiver.decode()){
    IrReceiver.resume();
    Serial.println(IrReceiver.decodedIRData.command);
    int command = IrReceiver.decodedIRData.command;
    switch(command){
      case Up:{
        myservo.write(90);
        break;
      }
      case Left:{
        myservo.write(0);
        break;
      }
      case Right:{
        myservo.write(180);
        break;
      }
      case OK:{
        myservo.write(0);
        delay(500);
        myservo.write(180);
        delay(500);
        myservo.write(0);
        delay(500);
        myservo.write(90);
        break;
      }
      default: {
        Serial.println("Press other button");
      }
    }
  }
}