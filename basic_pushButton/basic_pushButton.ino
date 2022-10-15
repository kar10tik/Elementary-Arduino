//PushButton to switch LED ON when button is predssed
int ledPin = 13;
int val = 0;
int inputPin = 2;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inputPin);
  if (val == HIGH)
  {
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
}
