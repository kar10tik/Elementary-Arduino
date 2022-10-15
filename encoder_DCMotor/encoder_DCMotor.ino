//Rotary Encoder and DC Motor Control
//#include <EncoderStepCounter.h>
#define ENCA 9 //Pin 9 on NANO
#define ENCB 10 //Pin 10 on NANO

uint8_t ENCA_DATA;
uint8_t ENCB_DATA;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Set serial communication baud rate to 9600
  pinMode(ENCA, INPUT);
  pinMode(ENCB, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ENCA_DATA = digitalRead(ENCA);
  ENCB_DATA = digitalRead(ENCB);
  Serial.print(ENCA_DATA);
  Serial.print(" ");
  Serial.print(ENCB_DATA);
  Serial.println();
}
