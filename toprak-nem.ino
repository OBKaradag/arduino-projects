int sensorPin = 8;
int buzzerPin = 9;
int veri;


void setup() {
  pinMode(sensorPin,INPUT);
  pinMode(buzzerPin,OUTPUT);

}

void loop() {

 veri = digitalRead(sensorPin);

 if(veri == HIGH){
   
   digitalWrite(buzzerPin,HIGH);
   delay(100);
   digitalWrite(buzzerPin,LOW);
   delay(100);
 }
  else{
    digitalWrite(buzzerPin,LOW);
  }
}
