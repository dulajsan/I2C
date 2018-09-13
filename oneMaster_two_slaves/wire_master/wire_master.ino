#include<Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
}

void loop() {
  while(Serial.available()){
    char c = Serial.read();
    char slave = Serial.read();

    // a=slave1 b=slave2  c=both_slaves
    //first slave high
    if(c=='H' && slave== 'a'){
      Wire.beginTransmission(5);
      Wire.write('H');
      Wire.endTransmission();
    }

  //second slave high
    else if(c=='H' && slave== 'b'){
      Wire.beginTransmission(6);
      Wire.write('H');
      Wire.endTransmission();
    }

  //first slave low
    else if(c=='L' && slave== 'a'){
      Wire.beginTransmission(5);
      Wire.write('L');
      Wire.endTransmission();
    }

  // second slave low
    else if(c=='L' && slave== 'b'){
      Wire.beginTransmission(6);
      Wire.write('L');
      Wire.endTransmission();
    }

  // both slaves high
    else if(c=='H' && slave== 'c'){
      Wire.beginTransmission(5);
      Wire.write('H');
      Wire.endTransmission();

      Wire.beginTransmission(6);
      Wire.write('H');
      Wire.endTransmission();
    }

    // both slaves low
    else if(c=='L' && slave== 'c'){
      Wire.beginTransmission(5);
      Wire.write('L');
      Wire.endTransmission();

      Wire.beginTransmission(6);
      Wire.write('L');
      Wire.endTransmission();
    }

    

   
    
  }

}
