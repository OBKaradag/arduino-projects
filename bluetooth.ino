int veri;
#define krmzPin 9
#define yesilPin 10
#define maviPin 11

void setup() { 
 
 Serial.begin(9600);
 pinMode(krmzPin,OUTPUT);
 pinMode(yesilPin,OUTPUT);
 pinMode(maviPin,OUTPUT);

}

void loop() {
 
 if(Serial.available()){
   veri = Serial.read();
 }
 if(veri == 'k'){
  digitalWrite(krmzPin,LOW);
  digitalWrite(yesilPin,HIGH);
  digitalWrite(maviPin,HIGH);
 }
  else if(veri == 'y'){
  digitalWrite(krmzPin,HIGH);
  digitalWrite(yesilPin,LOW);
  digitalWrite(maviPin,HIGH);
 }
   else if(veri == 'm'){
  digitalWrite(krmzPin,HIGH);
  digitalWrite(yesilPin,HIGH);
  digitalWrite(maviPin,LOW);
 }
 else {
  digitalWrite(krmzPin,LOW);
  digitalWrite(yesilPin,LOW);
  digitalWrite(maviPin,LOW);
 }
}
