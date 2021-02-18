const int ledPin1 = 10;
const int ledPin2 = 11;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
}

void loop() {
  for(i=1; i<=2; i++){
    if(i==1){
      digitalWrite(ledPin1,HIGH);
      digitalWrite(ledPin2,LOW);
      delay(1000);
    }else{
      digitalWrite(ledPin1,LOW);
      digitalWrite(ledPin2,HIGH);
      delay(1000);
    }
  }
}
