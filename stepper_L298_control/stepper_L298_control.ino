// Include the Arduino Stepper Library
#include <Stepper.h>

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