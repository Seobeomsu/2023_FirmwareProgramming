#include <IRremote.h>
#define IR_RECEIVE_PIN 8
#define IR_BUTTON_1 69
#define IR_BUTTON_2 70
#define IR_BUTTON_3 71
#define LED_Red 12
#define LED_Blue 11
byte state_LED_Red = LOW;
byte state_LED_Blue = LOW;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
}

void loop() {
  if (IrReceiver.decode()){
    IrReceiver.resume();
    Serial.println(IrReceiver.decodedIRData.command);
    int command = IrReceiver.decodedIRData.command;
    switch(command){
      case IR_BUTTON_1:{
        state_LED_Red = (state_LED_Red == LOW) ? HIGH : LOW;
        digitalWrite(LED_Red , state_LED_Red);
        break;
      }
      case IR_BUTTON_2:{
        state_LED_Blue = (state_LED_Blue == LOW) ? HIGH : LOW;
        digitalWrite(LED_Blue , state_LED_Blue);
        break;
      }
      case IR_BUTTON_3:{
        Serial.println("You are pressed button no.3");
        break;
      }
      default: {
        digitalWrite(LED_Red , LOW);
        digitalWrite(LED_Blue , LOW);
        Serial.println("Try Again!");
      }
    }
  }
}
