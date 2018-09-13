
#include <HardWire.h>

void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop() {
  Wire.beginTransmission(5); // transmit to device #5 -slave 1
  Wire.write("Master to slave 1: ");        // sends five bytes
  Wire.write(x);              // sends one byte
  Wire.endTransmission();    // stop transmitting


  Wire.beginTransmission(6); // transmit to device #6 -slave 2
  Wire.write("Master to slave 2: ");        // sends five bytes
  Wire.write(x);              // sends one byte
  Wire.endTransmission();    // stop transmitting

  Wire.beginTransmission(7); // transmit to device #7 -slave 3
  Wire.write("Master to slave 1: ");        // sends five bytes
  Wire.write(x);              // sends one byte
  Wire.endTransmission();    // stop transmitting
  
  x++;
  delay(500);
}
