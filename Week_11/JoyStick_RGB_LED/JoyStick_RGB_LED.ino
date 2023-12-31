int Analog_X = A0;
int Analog_Y = A1;
int Digital_Z = 3;
int Red = 13;
int Green = 12;
int Blue = 11;

void setup(){
  Serial.begin(9600);
  pinMode(Analog_X, INPUT);
  pinMode(Analog_Y, INPUT);
  pinMode(Digital_Z, INPUT_PULLUP);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
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

  if(val_Z_13 == 1){
    if(val_Y_A1 >= 900){
      digitalWrite(Red , LOW);
      digitalWrite(Blue , HIGH);
      digitalWrite(Green , LOW);
    }else if(val_Y_A1 <= 100){
      digitalWrite(Red , HIGH);
      digitalWrite(Green , LOW);
      digitalWrite(Blue , LOW);
    }else if(val_X_A0 <= 100){
      digitalWrite(Green , HIGH);
      digitalWrite(Red , LOW);
      digitalWrite(Blue , LOW);
    }else if(val_X_A0 >= 900){
      digitalWrite(Green , HIGH);
      digitalWrite(Red , HIGH);
      digitalWrite(Blue , LOW);
    }else{
      digitalWrite(Red , LOW);
      digitalWrite(Green , LOW);
      digitalWrite(Blue , LOW);
    }
  }else{
    digitalWrite(Red , HIGH);
    digitalWrite(Green , HIGH);
    digitalWrite(Blue , HIGH);
  }

}