// Include the Arduino Stepper Library
#include <Stepper.h>
/*
Pin Connections
  Stepper to L298N
    BLUE to L298N OUT1
    YELLOW to L298N OUT2
    PINK to L298N OUT3
    ORANGE to L298N OUT4
  L298N to Arduino
    IN1 to D2
    IN2 to D3
    IN2 to D4
    IN2 to D5
    VCC to 5V
    GND to GND  
*/
// Number of steps per output rotation
const int stepsPerRevolution = 300;

// Create Instance of Stepper library
Stepper myStepper(stepsPerRevolution, 2, 3, 4, 5);


void setup()
{
	// set the speed at 60 rpm:
	myStepper.setSpeed(60);
	// initialize the serial port:
	Serial.begin(9600);
}

void loop() 
{
	// step one revolution in one direction:
	Serial.println("clockwise");
	myStepper.step(stepsPerRevolution);
	delay(1200);

	// step one revolution in the other direction:
	Serial.println("counterclockwise");
	myStepper.step(stepsPerRevolution);
	delay(1200);
}