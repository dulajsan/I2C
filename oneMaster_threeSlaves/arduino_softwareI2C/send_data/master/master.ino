#include "SoftwareI2C.h"

SoftwareI2C softwarei2c;

void setup()
{
    Serial.begin(115200);
    softwarei2c.begin(3, 2);       // sda, scl
}

void loop()
{

    softwarei2c.beginTransmission(5);
    softwarei2c.write('H');
    softwarei2c.endTransmission();
  
    
}
