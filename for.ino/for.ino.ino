const int led1 = 10;
const int led2 = 11;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  for(i=1; i<=3; i++){
    digitalWrite(led1,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
    delay(1000);
  }
  for(i=1; i<=2; i++){
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
    delay(1000);
  }
}
