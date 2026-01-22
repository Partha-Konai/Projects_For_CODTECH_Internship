#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

unsigned int RelayPin[4] = {27, 26, 25, 33};
unsigned char data[4][2] =
{
  {'A', 'W'},
  {'B', 'X'},
  {'C', 'Y'},
  {'D', 'Z'}
};

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32 Home");

  while(!SerialBT.hasClient()){
    delay(500);
  }

  if(SerialBT.hasClient() == true){
    SerialBT.println("Bluetooth Connected Sucessfully.");
    SerialBT.println("A = ON R1, B = ON R2, C = ON R3, D = ON R4\nW = OFF R1, X = OFF R2, Y = OFF R3, Z = OFF R4");
  }

  for(int i=0; i<4; i++){
    pinMode(RelayPin[i], OUTPUT);
  }

  for(int i=0; i<4; i++){
    digitalWrite(RelayPin[i], HIGH);
  }
}

void loop() {
  if(SerialBT.available()){
    char incomingData = SerialBT.read();

    for(int i=0; i<4; i++){
      
      if(incomingData == data[i][0]){
        digitalWrite(RelayPin[i], LOW);
        SerialBT.print("OK Turn ON R ");
        SerialBT.println(i+1);
      }
      else if(incomingData == data[i][1]){
        digitalWrite(RelayPin[i], HIGH);
        SerialBT.print("OK Turn OFF R ");
        SerialBT.println(i+1);
      }
    }
  }
}