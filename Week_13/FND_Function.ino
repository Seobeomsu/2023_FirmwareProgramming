int FND_A = 13;
int FND_B = 12;
int FND_C = 11;
int FND_D = 10;
int FND_E = 9;
int FND_F = 8;
int FND_G = 7;
int FND_DP = 6;

int digits[11][8] = {
  {1,1,1,1,1,1,0,0}, //0
  {0,1,1,0,0,0,0,0}, //1
  {1,1,1,1,1,1,0,0}, //0
  {0,1,1,0,0,1,1,0}, //4
  {1,1,1,0,0,0,0,0}, //7
  {0,1,1,0,0,1,1,0}, //4
  {1,1,1,1,1,1,0,0}, //0
  {1,1,1,1,1,1,0,0}, //0
  {1,1,1,0,0,0,0,0}, //7
  {0,1,1,0,0,0,0,0}, //1
  {1,1,1,1,1,1,0,0} //0
};

int pins[] = {13,12,11,10,9,8,7,6};

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
}

void loop() {
  FND(1,1,1,1,1,1,0,0); //0
  delay(1000);
  FND(0,1,1,0,0,0,0,0); //1
  delay(1000);
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
