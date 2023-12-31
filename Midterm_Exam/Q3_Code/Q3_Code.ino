int Red = 13;
int Green = 12;
int Blue = 11;
int Push_G = 5;
int Push_B = 4;
int Pot_R = A0;

void setup() {
  Serial.begin(9600);
  pinMode(Red , OUTPUT);
  pinMode(Green , OUTPUT);
  pinMode(Blue , OUTPUT);
  pinMode(Push_G, INPUT);
  pinMode(Push_B, INPUT);
}
int Value;
int Bright;

void loop() {
  Value = analogRead(Pot_R);
  Serial.println(Value);
  Bright = map(Value , 0 , 1023 , 0 , 255);
  Serial.println(Bright);
  analogWrite(Red , Bright);

  int G_Value =  digitalRead(Push_G);
  int B_Value =  digitalRead(Push_B);

  Serial.println(G_Value);
  Serial.println(B_Value);
  
  if(G_Value == HIGH){
    digitalWrite(Green, LOW);
  }else{
    digitalWrite(Green , HIGH);
  }

  if(B_Value == HIGH){
    digitalWrite(Blue, LOW);
  }else{
    digitalWrite(Blue , HIGH);
  }

}
