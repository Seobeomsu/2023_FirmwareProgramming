int Analog_X = A0;
int Analog_Y = A1;
int Digital_Z = 3;
int LED_Left = 13;
int LED_Right = 12;

void setup(){
  Serial.begin(9600);
  pinMode(Analog_X, INPUT);
  pinMode(Analog_Y, INPUT);
  pinMode(Digital_Z, INPUT_PULLUP);
  pinMode(LED_Left, OUTPUT);
  pinMode(LED_Right, OUTPUT);
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

  if(val_X_A0 < 1024 && val_X_A0 >= 0){
    if(val_X_A0 >= 824){
      digitalWrite(LED_Left , LOW);
      digitalWrite(LED_Right , HIGH);
    }else if(val_X_A0<= 200){
      digitalWrite(LED_Left , HIGH);
      digitalWrite(LED_Right , LOW);
    }else {
      digitalWrite(LED_Left , LOW);
      digitalWrite(LED_Right , LOW);
    }
  }else{
    digitalWrite(LED_Left , LOW);
    digitalWrite(LED_Right , LOW);
  }

}