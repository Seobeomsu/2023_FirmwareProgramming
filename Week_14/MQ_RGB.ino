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
  if(val >= 400){
    analogWrite(pin_Red,255);
    analogWrite(pin_Green,0);
    analogWrite(pin_Blue,0);
  } else if (val >= 200 && val < 400){
    analogWrite(pin_Red,0);
    analogWrite(pin_Green,255);
    analogWrite(pin_Blue,0);
  }else if (val < 200 ){
    analogWrite(pin_Red,0);
    analogWrite(pin_Green,0);
    analogWrite(pin_Blue,255);
  }
  delay(100);
}