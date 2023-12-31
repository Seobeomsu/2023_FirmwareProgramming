int Analog_X = A0;
int Analog_Y = A1;
int Digital_Z = 3;
int LED_Up = 13;
int LED_Down = 12;
int LED_Right = 11;
int LED_Left = 10;
int LED_Z = 8;

void setup(){
  Serial.begin(9600);
  pinMode(Analog_X, INPUT);
  pinMode(Analog_Y, INPUT);
  pinMode(Digital_Z, INPUT_PULLUP);
  pinMode(LED_Up, OUTPUT);
  pinMode(LED_Down, OUTPUT);
  pinMode(LED_Right, OUTPUT);
  pinMode(LED_Left, OUTPUT);
  pinMode(LED_Z , OUTPUT);
}

void loop(){
  int val_X_A0;
  int val_Y_A1;
  int val_Z_13;
  val_X_A0 = analogRead(Analog_X);
  val_Y_A1 = analogRead(Analog_Y);
  val_Z_13 = digitalRead(Digital_Z);
  Serial.print("X : ");
  Serial.print(val_X_A0);
  Serial.print(" | Y : ");
  Serial.print(val_Y_A1);
  Serial.print(" | Z : "); 
  Serial.println(val_Z_13);

  if(val_X_A0 >= 900){
    digitalWrite(LED_Right, HIGH);
  }else if( val_X_A0 <= 100){
    digitalWrite(LED_Left, HIGH);
  }else{
    digitalWrite(LED_Right , LOW);
    digitalWrite(LED_Left , LOW);
  }

  if(val_Y_A1 >= 900){
    digitalWrite(LED_Up , HIGH);
  }else if(val_Y_A1 <= 100){
    digitalWrite(LED_Down , HIGH);
  }else{
    digitalWrite(LED_Up , LOW);
    digitalWrite(LED_Down , LOW);
  }
  
  if(val_Z_13 == 1){
    digitalWrite(LED_Z, LOW);
  }else{
    digitalWrite(LED_Z, HIGH);
  }
}