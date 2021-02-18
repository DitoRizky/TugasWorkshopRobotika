const int led1 = 10;
const int led2 = 11;
const int led3 = 12;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  fungsi(1,1,led1,500);
  fungsi(1,2,led2,500);
  fungsi(1,3,led3,300);
}

void fungsi(int awal, int akhir, int led, int jeda){
  for(i=awal; i<=akhir; i++){
    digitalWrite(led,HIGH);
    delay(jeda);
    digitalWrite(led,LOW);
    delay(jeda);
  }
}
