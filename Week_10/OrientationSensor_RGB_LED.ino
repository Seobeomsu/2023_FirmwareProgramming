#include <SoftwareSerial.h>
#define BTtx 2
#define BTrx 3
int Red = 13;
int Green = 12;
int Blue = 11;

SoftwareSerial BT(BTtx , BTrx);

int B_value;
int Blue_V;

void setup() {
  pinMode(Red , OUTPUT);
  pinMode(Green , OUTPUT);
  pinMode(Blue , OUTPUT);
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(BT.available()>0){
    B_value = BT.read();
    Serial.println(B_value);
    Blue_V = map(B_value , 0 , 180 , 0 , 255);
  }
  if(B_value != 0){ // 0이라는 쓰레기값이 계속전달되서 예외처리함.
    RGB(255,255,Blue_V);
  }
}

void RGB(int Red_V, int Green_V, int Blue_V){
  analogWrite(Red , Red_V);
  analogWrite(Green , Green_V);
  analogWrite(Blue , Blue_V);
}