int BlueValue;
int LED_Red_Pin = 11;
int LED_Green_Pin = 10;
int LED_Blue_Pin = 9;
int Pot_Blue = A1;
int val_Sensor_Blue = 0;

void setup() {
  pinMode(LED_Red_Pin, OUTPUT);
  pinMode(LED_Green_Pin, OUTPUT);
  pinMode(LED_Blue_Pin, OUTPUT);
}

void loop() {
  val_Sensor_Blue = analogRead(Pot_Blue);
  BlueValue = map(val_Sensor_Blue, 0, 1023, 255, 0);
  RGB_Color(255, 255, BlueValue);
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
  analogWrite(LED_Red_Pin, LED_Red_Val);
  analogWrite(LED_Green_Pin, LED_Green_Val);
  analogWrite(LED_Blue_Pin, LED_Blue_Val);
}