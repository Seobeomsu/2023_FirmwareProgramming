int Push_Button = 6;
int Pin_Active = 10;

void setup(){
  Serial.begin(9600);
  pinMode(Push_Button, INPUT);
  pinMode(Pin_Active, OUTPUT);
}

void loop(){
  int ButtonValue = digitalRead(Push_Button);
  Serial.println(ButtonValue);
  if(ButtonValue == 0){
    digitalWrite(Pin_Active, LOW);
    }else{
    digitalWrite(Pin_Active, HIGH);
  }
}