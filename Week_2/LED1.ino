// C++ code
int pin_LED = 13;
void setup() {
	pinMode(pin_LED, OUTPUT); 
	Serial.begin(9600); 
}
void loop() {
  digitalWrite(pin_LED, HIGH); 
  delay(1000); 
  digitalWrite(pin_LED, LOW);
  delay(1000);
  digitalWrite(pin_LED, HIGH);
  delay(500);
  digitalWrite(pin_LED, LOW);
  delay(500);
}
