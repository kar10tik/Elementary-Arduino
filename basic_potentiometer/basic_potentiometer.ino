/*LED ON/OFF Control Using Potentiometer 
 * Analog sensor reads potentiometer output on A0 and program turns LED ON/OFF for a time depending on pot setting
 */
int sensorPin = 0;
int ledPin = 13;
int sensorVal = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorVal = analogRead(sensorPin);
  digitalWrite(ledPin, HIGH);
  delay(sensorVal);
  digitalWrite(ledPin, LOW);
  delay(sensorVal);
}
