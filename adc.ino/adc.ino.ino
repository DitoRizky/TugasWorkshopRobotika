const int adc = A0;
const int led = 5;
int adcRead, tegangan;

void setup() {
  Serial.begin(9600);
  pinMode(adc,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  adcRead = analogRead(adc);
  tegangan = map(adcRead,0,4095,0,500);
  if(tegangan == 273){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  Serial.println(adcRead);
  Serial.println(tegangan);
  Serial.println(" ");
}
