#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

int pinHorizon = A0;
int pinVertical = A1;
int pinButton = 13;

void setup(){
  Serial.begin(9600);
  pinMode(pinHorizon , INPUT);
  pinMode(pinVertical , INPUT);
  pinMode(pinButton , INPUT_PULLUP);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
}

void loop(){
  int val_X_A0 = analogRead(pinHorizon);
  int val_Y_A1 = analogRead(pinVertical);
  int val_Button = digitalRead(pinButton);
  if(val_Y_A1 >= 900){
    FND(0,1,1,0,0,0,0,0);
    Serial.println("UP(1)");
  }else if(val_Y_A1 <= 100){
    FND(1,1,0,1,1,0,1,0);
    Serial.println("Down(2)");,,,,\jjnnn
  }else if(val_X_A0 <= 100){
    FND(1,1,1,1,0,0,1,0);
    Serial.println("Left(3)");
  }else if(val_X_A0 >= 900){
    FND(0,1,1,0,0,1,1,0);
    Serial.println("Right(4)");
  }else{
    FND(1,1,1,1,1,1,0,0);
    Serial.println("Center(0)");
  }
  delay(100);
}


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
