#include <Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();

//request from address 5
  Wire.requestFrom(5,5);
  while(Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }

//request from address 6
  Wire.requestFrom(6,5);
  while(Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }

  //request from address 7
  Wire.requestFrom(7,5);
  while(Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
