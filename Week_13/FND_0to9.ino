#define ON HIGH
#define OFF LOW

int FND_A = 13;
int FND_B = 12;
int FND_C = 11;
int FND_D = 10;
int FND_E = 9;
int FND_F = 8;
int FND_G = 7;
int FND_DP = 6;

int digits[10][8] = {
  {ON,ON,ON,ON,ON,ON,OFF,OFF}, //0
  {OFF,ON,ON,OFF,OFF,OFF,OFF,OFF}, //1
  {ON,ON,OFF,ON,ON,OFF,ON,OFF},//2
  {ON,ON,ON,ON,OFF,OFF,ON,OFF},//3
  {OFF,ON,ON,OFF,OFF,ON,ON,OFF}, //4
  {ON,OFF,ON,ON,OFF,ON,ON,OFF},//5
  {ON,OFF,ON,ON,ON,ON,ON,OFF},//6
  {ON,ON,ON,OFF,OFF,OFF,OFF,OFF}, //7
  {ON,ON,ON,ON,ON,ON,ON,OFF},//8
  {ON,ON,ON,ON,OFF,ON,ON,OFF},//9
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