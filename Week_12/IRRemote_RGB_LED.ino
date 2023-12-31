#include <IRremote.h>
#define IR_RECEIVE_PIN 8
#define IR_BUTTON_1 69
#define IR_BUTTON_2 70
#define IR_BUTTON_3 71
#define IR_BUTTON_4 68
#define IR_BUTTON_5 64
#define IR_BUTTON_6 67
#define IR_BUTTON_7 7

#define Red 12
#define Green 11
#define Blue 10

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
}

void loop() {
  if (IrReceiver.decode()){
    IrReceiver.resume();
    Serial.println(IrReceiver.decodedIRData.command);
    int command = IrReceiver.decodedIRData.command;
    switch(command){
      case IR_BUTTON_1:{
        RGB_LED(HIGH,LOW,LOW);
        break;
      }
      case IR_BUTTON_2:{
        RGB_LED(LOW,HIGH,LOW);
        break;
      }
      case IR_BUTTON_3:{
        RGB_LED(LOW,LOW,HIGH);
        break;
      }
      case IR_BUTTON_4:{
        RGB_LED(HIGH,HIGH,LOW);
        break;
      }
      case IR_BUTTON_5:{
        RGB_LED(HIGH,LOW,HIGH);
        break;
      }
      case IR_BUTTON_6:{
        RGB_LED(LOW,HIGH,HIGH);
        break;
      }
      case IR_BUTTON_7:{
        RGB_LED(HIGH,HIGH,HIGH);
        break;
      }
      default: {
        RGB_LED(LOW,LOW,LOW);
      }
    }
  }
}

void RGB_LED(int R_V , int G_V , int B_V){
  digitalWrite(Red, R_V);
  digitalWrite(Green, G_V);
  digitalWrite(Blue, B_V);
}