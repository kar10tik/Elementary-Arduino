#include <NewPing.h>
#define ECHO_PIN 2
#define TRIGGER_PIN 3
#define MAX_DISTANCE 200

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor HC-SR04 DEMO on Arduino Nano");
}

void ping_sensor(){
  int distance_cm;
  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
  distance_cm = sonar.ping_cm();
  Serial.println(distance_cm);
}

void loop() {
  // put your main code here, to run repeatedly:
  ping_sensor();
  return;
}
