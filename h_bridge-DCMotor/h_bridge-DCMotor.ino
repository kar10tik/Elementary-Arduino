//DC Motor Speed and Direction Control Using L298N H-Bridge and Rotary Encoder

#define IN1 2 //L289N IN1 Pin to Nano D2
#define IN2 3 //L289N IN2 Pin to Nano D3

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(10);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}
