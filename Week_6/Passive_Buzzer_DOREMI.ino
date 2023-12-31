int melody[] = { Do_4, Mi_4 , Sol_4, 0 }
int duration_s[] = { 4,8,8,1}
int pin_Piezo = 10;

void setup(){
  pinMode(pin_Piezo , OUTPUT);
}

void loop(){
  for (int sounds = 0; sounds < 4 ; sounds++){
    int Duration = 1000 / duration_s[sounds];
    tone(pin_Piezo, meolody[sounds], Duration);
    delay(Duration);
    int pasuseSound = Duration * 1.30;
    delay(pauseSound);
    noTone(pin_Piezo);
  }
}