const int dcMotor = 5;
const int arah = 4;
int motorSpeed = 255;

void setup() {
  Serial.begin(9600);
  pinMode(speedPin,OUTPUT);
  pinMode(arah,OUTPUT);
}

void loop() {
  digitalWrite(arah,HIGH);
  analogWrite(dcMotor,motorSpeed);
}
