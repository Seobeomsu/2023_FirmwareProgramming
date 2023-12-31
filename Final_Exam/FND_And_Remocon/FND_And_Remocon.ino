#include <IRremote.h>
#define IR_RECEIVE_PIN 아무숫자
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

void setup(){
  Serial.begin(9600);
  IrReceiver.resume();
}

void loop(){
  if(IrReceiver.decode()){
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command;
    내용은 여기로
  }
}

#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

void FND(int nA, int nB, int nC, int nD, int nE, int nF, int nG, int nDP){
  digitalWrite(A, nA);
  digitalWrite(B, nB);
  digitalWrite(C, nC);
  digitalWrite(D, nD);
  digitalWrite(E, nE);
  digitalWrite(F, nF);
  digitalWrite(G, nG);
  digitalWrite(DP, nDP);
}