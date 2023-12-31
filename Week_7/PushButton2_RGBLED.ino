int LED_Red_Pin = 11;
int LED_Green_Pin = 10;
int LED_Blue_Pin = 9;
int Red_Push = 6;
int Green_Push = 4;
int Blue_Push = 2;

void setup(){
    Serial.begin(9600);
	  pinMode(LED_Red_Pin, OUTPUT);
  	pinMode(LED_Green_Pin, OUTPUT);
  	pinMode(LED_Blue_Pin, OUTPUT);
  	pinMode(Red_Push, INPUT_PULLUP);
  	pinMode(Blue_Push, INPUT);
  	pinMode(Green_Push, INPUT_PULLUP);
}

void loop(){
  	int RedValue = digitalRead(Red_Push);
    int GreenValue = digitalRead(Green_Push);
    int BlueValue = digitalRead(Blue_Push);
    Serial.println("RED");
  	Serial.println(RedValue);
    Serial.println("GREEN");
    Serial.println(GreenValue);
    Serial.println("BLUE");
    Serial.println(BlueValue);
    LED(RedValue,GreenValue,BlueValue);
}

void LED(int R,int G,int B){
  if(R==1){
    digitalWrite(LED_Red_Pin,LOW);
  }else{
    digitalWrite(LED_Red_Pin,HIGH);
  }
    if(G==0){
    digitalWrite(LED_Green_Pin,LOW);
  }else{
    digitalWrite(LED_Green_Pin,HIGH);
  }
    if(B==1){
    digitalWrite(LED_Blue_Pin,LOW);
  }else{
    digitalWrite(LED_Blue_Pin,HIGH);
  }
}