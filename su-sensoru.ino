int buzzerPin = 8;
int sensorPin = A0;

int esikdegeri = 500;
int veri;

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  veri = analogRead(sensorPin);
  Serial.println(veri);
  delay(500);

if(veri > esikdegeri){
  digitalWrite(buzzerPin,HIGH);
  delay(250);
  digitalWrite(buzzerPin,LOW);
  delay(250);
  }
  else if(veri < esikdegeri){
    digitalWrite(buzzerPin,HIGH);
  }
}
