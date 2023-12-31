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
  for(int i=0; i<11 ; i++){
    for(int j=0; j<8 ; j++){
      digitalWrite(pins[j],digits[i][j]);
    }
    delay(1000);
  }
}
