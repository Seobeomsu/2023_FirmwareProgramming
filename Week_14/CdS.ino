int pin_CdS = A0;
int pin_LED = 13;
int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(pin_LED,OUTPUT);
  pinMode(pin_CdS,INPUT);
}

void loop(){
  val = analogRead(pin_CdS);
  Serial.println(val);
}