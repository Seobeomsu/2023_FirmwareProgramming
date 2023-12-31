#define Do_4 262
#define DoS_4 277
#define Re_4 294
#define reS_4 311
#define Mi_4 330
#define Pa_4 349
#define PaS_4 349
#define Sol_4 392
#define Sols_4 415
#define La_4 440
#define LaS_4 466
#define Si_4 494
#define Do_5 523

int pin_Piezo = 10;
int LED_C4 = 6;
int LED_D4 = 4;
int LED_E4 = 2;

void setup(){
  pinMode(pin_Piezo , OUTPUT);
  pinMode(LED_C4, OUTPUT);
  pinMode(LED_D4, OUTPUT);
  pinMode(LED_E4, OUTPUT);
}

// 4/4박자 총시간은 2000으로
void loop(){
  Sound(Do_4,600, LED_C4);
  Sound(Re_4,200, LED_D4);
  Sound(Mi_4,600, LED_E4);
  Sound(Do_4,200, LED_C4);

  Sound(Mi_4,400, LED_E4);
  Sound(Do_4,400, LED_C4);
  Sound(Mi_4,800, LED_E4);

  Sound(Re_4,600, LED_D4);
  Sound(Mi_4,200, LED_E4);
  Sound(Pa_4,200, 0);
  Sound(Pa_4,200, 0);
  Sound(Mi_4,200, LED_E4);
  Sound(Re_4,200, LED_D4);
  
  Sound(Pa_4,1600, 0);
  delay(10000);
}

void Sound(int note, int duration,int Light){
  tone(pin_Piezo,note,1000);
  digitalWrite( Light , HIGH);
  delay(duration);
  
  noTone(pin_Piezo);
  digitalWrite( Light , LOW);
  int Delay = duration / 4;
  delay(Delay);
}