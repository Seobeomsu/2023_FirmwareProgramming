int FND_A = 13;
int FND_B = 12;
int FND_C = 11;
int FND_D = 10;
int FND_E = 9;
int FND_F = 8;
int FND_G = 7;
int FND_DP = 6;

int pin_Echo = 3;
int pin_Trig = 2;

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
  pinMode(pin_Echo, INPUT);
  pinMode(pin_Trig, OUTPUT);
}

long duration;
int distance;

void loop() {
  digitalWrite(pin_Trig , LOW);
  delayMicroseconds(2);
  digitalWrite(pin_Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin_Trig , LOW);
  duration = pulseIn(pin_Echo,HIGH);
  distance = duration * 340 * 100 / 1000000/2;

  Serial.print("Distance : ");
  Serial.println(distance);

  if(distance < 21 && distance > 0){
    FND(1,1,1,1,1,1,0,0);//0
  }else if(distance > 20 && distance < 41){
    FND(0,1,1,0,0,0,0,0);//1
  }else if(distance > 40 ){
    FND(1,1,0,1,1,0,1,0);//2
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