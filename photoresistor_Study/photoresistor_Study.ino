/*LED ON/OFF Control Using Potentiometer 
 * Analog sensor reads potentiometer output on A0 and program turns LED ON/OFF for a time depending on pot setting
 */
int lightPin = 0;
int ledPin = 9;
int sensorVal = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(ledPin);
  lightLevel = map(lightLevel, 0, 900, 0, 255);
  lightLevel = constrain(lightLevel, 0, 255);
  analogWrite(ledPin, lightLevel);
}
