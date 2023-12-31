int pin_CdS = A0;
int pin_Red = 13;
int pin_Green = 12;
int pin_Blue = 11;
int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(pin_Red,OUTPUT);
  pinMode(pin_Green,OUTPUT);
  pinMode(pin_Blue,OUTPUT);
  pinMode(pin_CdS,INPUT);
}

void loop(){
  val = analogRead(pin_CdS);
  Serial.println(val);
  if (val >= 500 ){
    analogWrite(pin_Red , 255);
    analogWrite(pin_Green , 0);
    analogWrite(pin_Blue , 0);
  }
  else if(val >= 200 && val < 500){
    analogWrite(pin_Red , 0);
    analogWrite(pin_Green , 255);
    analogWrite(pin_Blue , 0);
  }else if (val < 200){
        analogWrite(pin_Red , 0);
    analogWrite(pin_Green , 0);
    analogWrite(pin_Blue , 255);
  }
}