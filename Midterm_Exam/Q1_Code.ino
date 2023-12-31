int Trig = 12;
int Echo = 13;
int LED_R = 10;
int LED_G = 9;
int LED_B = 8;
int Buzzer = 2;

void setup(){
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  Serial.begin(9600);
}

long duration;
int distance;

void loop(){
  digitalWrite(Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);
  duration = pulseIn(Echo, HIGH);
  distance = duration * 340 * 100 / 1000000 / 2;
  Serial.print(distance);
  Serial.println("cm");
  
  if(distance < 20){
  	digitalWrite(LED_R,HIGH);
    digitalWrite(LED_G,LOW);
    digitalWrite(LED_B,LOW);
    tone(Buzzer,262);
    delay(100);
    noTone(Buzzer);
    delay(50);
  }
   if(distance < 30 && distance > 21){
  	digitalWrite(LED_R,LOW);
    digitalWrite(LED_G,HIGH);
    digitalWrite(LED_B,LOW);
    tone(Buzzer,262);
    delay(250);
    noTone(Buzzer);
    delay(100);
  }
   if(distance < 40 && distance > 31){
  	digitalWrite(LED_R,LOW);
    digitalWrite(LED_G,LOW);
    digitalWrite(LED_B,HIGH);
    tone(Buzzer,262);
    delay(500);
    noTone(Buzzer);
    delay(100);
  }
  if(distance > 40){
    digitalWrite(LED_R,LOW);
    digitalWrite(LED_G,LOW);
    digitalWrite(LED_B,LOW);
    tone(Buzzer,262);
    delay(1000);
    noTone(Buzzer);
    delay(100);
  }
  
}