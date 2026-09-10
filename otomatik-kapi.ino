#include <MFRC522.h>
#include <Servo.h>
#include <SPI.h>

int RST_pin = 9;
int SS_pin = 10;
int Servopin = 8;  

Servo motor;
MFRC522 rfid(SS_pin, RST_pin);
byte ID[4] = {243,48,178,13};

void setup() {
  motor.attach(Servopin);
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void loop() {
   
  if(! rfid.PICC_IsNewCardPresent())
  return;
  if(! rfid.PICC_ReadCardSerial())
  return;

  if(rfid.uid.uidByte[0] == ID[0] && 
  rfid.uid.uidByte[1] == ID[1] &&
  rfid.uid.uidByte[2] == ID[2] &&
  rfid.uid.uidByte[3] == ID[3]){
    Serial.println("kapı acildi");
    ekranaYazdir();
    motor.write(180);
    delay(3000);
    motor.write(0);
    delay(1000);
  }
  else{
    Serial.println(" yetkisiz kart");
    ekranaYazdir();
  }
  rfid.PICC_HaltA();
}

void ekranaYazdir(){
  Serial.print("ID numarasi: ");
  for(int sayac=0; sayac<4; sayac++){
    Serial.print(rfid.uid.uidByte[sayac]);
    Serial.print("");
  }
  Serial.println("");
}