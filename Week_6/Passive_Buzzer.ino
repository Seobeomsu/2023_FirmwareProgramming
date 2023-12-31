int pin_Passive = 10;
void setup(){
	pinMode(pin_Passive, OUTPUT);
}

void loop(){
	tone(pin_Passive, 262);
  	delay(1000);
  	noTone(pin_Passive);
  	delay(1000);
    	tone(pin_Passive, 294);
  	delay(1000);
  	noTone(pin_Passive);
  	delay(1000);
    	tone(pin_Passive, 330);
  	delay(1000);
  	noTone(pin_Passive);
  	delay(1000);
}