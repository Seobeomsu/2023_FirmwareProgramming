int LED_Red_Pin = 11;
int LED_Green_Pin = 10;
int LED_Blue_Pin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(LED_Red_Pin, OUTPUT);
  pinMode(LED_Green_Pin, OUTPUT);
  pinMode(LED_Blue_Pin, OUTPUT);
}
int serialData;
void loop() {
  if (Serial.available() > 0) {
    serialData = Serial.read();
    Serial.println(serialData);
    if (serialData == 'R'){
     RGB_Color(255,0,0);
    } else if (serialData == 'G'){
     RGB_Color(0,255,0);
    } else if (serialData == 'B'){
     RGB_Color(0,0,255);
    } else if (serialData == 'Y'){
     RGB_Color(255,255,0);
    } else if (serialData == 'C'){
     RGB_Color(0,255,255);
    } else if (serialData == 'M'){
     RGB_Color(255,0,255);
    } else if (serialData == 'W'){
     RGB_Color(255,255,255);
    } else{
     RGB_Color(0,0,0);
    }
  }
}

void RGB_Color(int LED_Red_Val, int LED_Green_Val, int LED_Blue_Val) {
  analogWrite(LED_Red_Pin, LED_Red_Val);
  analogWrite(LED_Green_Pin, LED_Green_Val);
  analogWrite(LED_Blue_Pin, LED_Blue_Val);
}
