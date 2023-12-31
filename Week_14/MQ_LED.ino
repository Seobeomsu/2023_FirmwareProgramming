int pin_MQ3 = A5;
int pin_Red = 11;

void setup(){
  Serial.begin(9600);
  pinMode(pin_Red,OUTPUT);
}

void loop(){
  int val = analogRead(pin_MQ3);
  Serial.println(analogRead(pin_MQ3));
  if(val >= 400){
    digitalWrite(pin_Red,HIGH);
  } else {
    digitalWrite(pin_Red,LOW);
  }
  delay(100);
}