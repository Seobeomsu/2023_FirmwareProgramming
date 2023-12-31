// 2019019014 서범수 LED SOS
int pin_LED = 13;

void setup() {
	pinMode(pin_LED, OUTPUT); 
	Serial.begin(9600); 
}

void loop() {
  //MOS S
  for(int i=0;i<3;i++){
  	digitalWrite(pin_LED, HIGH); 
	  delay(500);
	  digitalWrite(pin_LED, LOW);
	  delay(500);
  }
  //MOS O
  for(int i=0;i<3;i++){
  	digitalWrite(pin_LED, HIGH); 
  	delay(1000);
	  digitalWrite(pin_LED, LOW);
	  delay(500);
  }
  //MOS S
  for(int i=0;i<3;i++){
    digitalWrite(pin_LED, HIGH); 
    delay(500);
    digitalWrite(pin_LED, LOW);
   delay(500);
  }
}
