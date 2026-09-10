int esikdeger = 500;
int buzzerPin = 9;
int deger;


void setup() {
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 deger = analogRead(A0);
 Serial.print(deger);
 Serial.print("-");
 Serial.println(esikdeger);
 delay(500);

 if(deger > esikdeger){
   digitalWrite(buzzerPin,HIGH);
   delay(250);
   digitalWrite(buzzerPin,LOW);
   delay(250);
 }
  else{
    digitalWrite(buzzerPin,LOW);
  }
}
