#include<Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
}

void loop() {
  while(Serial.available()){
    char c = Serial.read();

    //slave 1=address 5,  slave 2= address 6, slave 3=address=7
    if(c=='H'){
      Wire.beginTransmission(5);
      Wire.write('H');
      Wire.endTransmission();

      Wire.beginTransmission(6);
      Wire.write('H');
      Wire.endTransmission();

      Wire.beginTransmission(7);
      Wire.write('H');
      Wire.endTransmission();
    }

    else if(c == 'L'){
      Wire.beginTransmission(5);
      Wire.write('L');
      Wire.endTransmission();

      Wire.beginTransmission(6);
      Wire.write('L');
      Wire.endTransmission();

      Wire.beginTransmission(7);
      Wire.write('L');
      Wire.endTransmission();
      
    }


 
    
  }

}
