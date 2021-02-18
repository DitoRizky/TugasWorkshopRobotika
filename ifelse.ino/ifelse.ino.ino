const int led = 13;
const int button = 3;

void setup() {
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  if(digitalRead(button) == 1){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
