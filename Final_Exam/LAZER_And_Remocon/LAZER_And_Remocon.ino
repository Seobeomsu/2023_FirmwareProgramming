#include <IRremote.h>
#define IR_RECEIVE_PIN 3
#define IR 13
#define IR_1 69
#define IR_2 70
#define IR_3 71
#define IR_4 68
#define IR_5 64
#define IR_6 67
#define IR_7 7
#define IR_8 21
#define IR_9 9
#define IR_0 25
#define Up 24
#define Down 82
#define Right 90
#define Left 9
#define ok 28
#define star 22
#define shap 13
int pin_LED = 13;
int pin_Red = 12;
int pin_Green = 11;
int pin_Blue = 10;
int LAZER = 8;

void setup(){
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  pinMode(pin_LED , OUTPUT);
  pinMode(pin_Red , OUTPUT);
  pinMode(pin_Blue , OUTPUT);
  pinMode(pin_Green , OUTPUT);
  pinMode(LAZER , OUTPUT);
}

void loop(){
  if(IrReceiver.decode()){
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command;
    Serial.println(command);
    switch(command){
      case IR_1 :{
        digitalWrite(pin_LED , HIGH);
        break;
      }
      case IR_2 :{
        digitalWrite(pin_LED, LOW);
        break;
      }
      case IR_3 :{
        RGB(0,0,1);
        break;
      }
      case IR_4 :{
        RGB(0,0,0);
        break;
      }case IR_5 :{
       RGB(0,1,0);
        break;
      }case IR_6 :{
        RGB(0,0,0);
        break;
      }case IR_7 :{
        RGB(1,0,0);
        break;
      }case IR_8 :{
        RGB(0,0,0);
        break;
      }case IR_9 :{
        digitalWrite(LAZER , HIGH);
        break;
      }case IR_0 :{
        digitalWrite(LAZER , LOW);
        break;
      }
    }
  }
}

void RGB(int RV,int GV , int BV){
  digitalWrite(pin_Red, RV);
  digitalWrite(pin_Green, GV);
  digitalWrite(pin_Blue, BV);
}