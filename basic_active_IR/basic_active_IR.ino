// Active IR Sensor Interfacing and Calibration
#define IR_OUT 2
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IR_OUT, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(IR_OUT);
  //Serial.println(val);
  if (!val)
    Serial.println("Obstacle Detected!");
  else Serial.println("Obstacle Not Detected!");
}
