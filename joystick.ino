#include <Servo.h>

Servo Motor;

int deger;
int derece;


void setup() {
  
  Motor.attach(3);  

}

void loop() {
  deger = analogRead(A0);
  derece = map(deger, 0, 1023, 0, 180);
  Motor.write(derece);

}
