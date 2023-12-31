int pin_MQ3 = A5;
#define DP 13
#define G 12
#define F 11
#define E 10
#define D 9
#define C 8
#define B 7
#define A 6

void setup(){
  Serial.begin(9600);
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
  int val = analogRead(pin_MQ3)-100;
  Serial.println(analogRead(val));
  if(val > 300){
    FND(1,1,1,1,0,0,1,0);
  }else if (val > 200 && val <= 300){
    FND(1,1,0,1,1,0,1,0);
  } else if (val > 100 && val <=200){
    FND(0,1,1,0,0,0,0,0);
  } else if (val < 100){
    FND(1,1,1,1,1,1,0,0);
  }
  delay(100);
}

void FND(int nA , int nB , int nC , int nD , int nE , int nF, int nG , int nDP){
  digitalWrite(A, nA);
  digitalWrite(B, nB);
  digitalWrite(C, nC);
  digitalWrite(D, nD);
  digitalWrite(E, nE);
  digitalWrite(F, nF);
  digitalWrite(G, nG);
  digitalWrite(DP, nDP);
}