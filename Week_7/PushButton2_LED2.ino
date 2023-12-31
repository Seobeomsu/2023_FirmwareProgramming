int LED_Red = 13;
int LED_Blue = 12;
int button_Red_Push = 9;
int button_Blue_Push = 8;

void setup(){
  Serial.begin(9600);
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
  pinMode(button_Red_Push, INPUT_PULLUP);
  pinMode(button_Blue_Push, INPUT_PULLUP);
}

void loop(){
  int readRedValue = digitalRead(button_Red_Push);
  int readBlueValue = digitalRead(button_Blue_Push);
  Serial.println(readRedValue);
  Serial.println(readBlueValue);
  if(readRedValue == HIGH){
  	digitalWrite(LED_Red, HIGH);
  }else{
    digitalWrite(LED_Red, LOW);
  }
  if(readBlueValue == HIGH){
  	digitalWrite(LED_Blue, HIGH);
  }else{
  	digitalWrite(LED_Blue, LOW);
  }
}