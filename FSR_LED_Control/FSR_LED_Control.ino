//LED Intensity control using FSR: Force Sensitive Resistor
//FSR offers infinite resistance when no force is applied; resistance decreases with increasing force
int sensePin = 2;
int ledPin = 9;

void setup() {
  Serial.begin(9700);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(sensePin)/4;
  //Pin voltage divided by 4 to scale from 10 bits to 8
  analogWrite(ledPin, value);
  //Set LED intensity proportional to pressure on FSR
  delay(100);
  Serial.println(value);
  delay(500);
}
