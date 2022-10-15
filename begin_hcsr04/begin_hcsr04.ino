#define echoPin 2
#define trigPin 3

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor HC-SR04 DEMO");
  Serial.println("Arduino Nano");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  //Serial.println(duration);
  distance = duration*(0.034/2);
  Serial.println("Distance (cm):");
  Serial.println(distance);
  delay(2000);
  return;
}
