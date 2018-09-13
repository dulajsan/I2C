
#include <HardWire.h>

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  Wire.requestFrom(5, 6);    // request 6 bytes from slave device #5

  while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
    serial.print("from slave1:");
    Serial.print(c);         // print the character
  }

  Wire.requestFrom(6, 6);    // request 6 bytes from slave device #5

  while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
    serial.print("from slave2:");
    Serial.print(c);         // print the character
  }

  Wire.requestFrom(7, 6);    // request 6 bytes from slave device #5

  while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
    serial.print("from slave3:");
    Serial.print(c);         // print the character
  }

  delay(500);
}
