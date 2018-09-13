#include<Wire.h>

void setup() {
  //address of slave 1 is five
  Wire.begin(6);
  Wire.onReceive(react);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void react(int n){
  while(Wire.available()){
    char c = Wire.read();

    if(c== 'H'){
      digitalWrite(13,HIGH);
    }else if(c == 'L'){
      digitalWrite(13,LOW);
    }
  }

  
}
