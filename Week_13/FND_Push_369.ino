int FND_A = 13;
int FND_B = 12;
int FND_C = 11;
int FND_D = 10;
int FND_E = 9;
int FND_F = 8;
int FND_G = 7;
int FND_DP = 6;

int Push_3 = 2;
int Push_2 = 3;
int Push_1 = 4;

void setup() {
  Serial.begin(9600);
  pinMode(FND_A, OUTPUT);
  pinMode(FND_B, OUTPUT);
  pinMode(FND_C, OUTPUT);
  pinMode(FND_D, OUTPUT);
  pinMode(FND_E, OUTPUT);
  pinMode(FND_F, OUTPUT);
  pinMode(FND_G, OUTPUT);
  pinMode(FND_DP, OUTPUT);
  pinMode(Push_3, INPUT_PULLUP);
  pinMode(Push_2, INPUT_PULLUP);
  pinMode(Push_1, INPUT_PULLUP);
}

void loop() {
  int val_1 = digitalRead(Push_1);
  int val_2 = digitalRead(Push_2);
  int val_3 = digitalRead(Push_3);
  Serial.print(val_1);
  Serial.print(val_2);
  Serial.println(val_3);

  if(val_1 == 0){
    FND(1,1,1,1,0,0,1,0);//3
  }else if(val_2 ==0){
    FND(1,0,1,1,1,1,1,0);//6
  }else if(val_3 == 0){
    FND(1,1,1,1,0,1,1,0);//9
  }else{
    FND(0,0,0,0,0,0,0,0);//OFF
  }
}

void FND(int A , int B , int C , int D , int E , int F , int G , int DP){
  digitalWrite(FND_A,A);
  digitalWrite(FND_B,B);
  digitalWrite(FND_C,C);
  digitalWrite(FND_D,D);
  digitalWrite(FND_E,E);
  digitalWrite(FND_F,F);
  digitalWrite(FND_G,G);
  digitalWrite(FND_DP,DP);
}