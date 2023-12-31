int pin_MQ3 = A5;
int pin_Red = 11;
int pin_Green = 9;
int pin_Blue = 10;

void setup(){
  Serial.begin(9600);
  pinMode(pin_Red,OUTPUT);
  pinMode(pin_Green,OUTPUT);
  pinMode(pin_Blue,OUTPUT);
}

void loop(){
  int val = analogRead(pin_MQ3);
  Serial.println(analogRead(pin_MQ3));
}