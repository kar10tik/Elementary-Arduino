// Obstacle Avoider
#include <NewPing.h>
#include <Servo.h>
#define ECHO_PIN 2
#define TRIG_PIN 3
#define US_MAX_DISTANCE 200 //Max Distance Sensed by Ultrasonic Sensor
#define MOTOR_IN1 4 
#define MOTOR_IN2 5

void setup() {
  // put your setup code here, to run once:
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
  Serial.begin(9600);  
}

int ping_HCSR04(){
  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.  
  return sonar.ping_cm();
}

void control_motor(int distance_cm)
{
  if (distance_cm < 5)
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  else
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  control_motor(ping_HCSRO4());
}
