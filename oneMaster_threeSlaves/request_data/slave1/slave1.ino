#include<Wire.h>

void setup() {
  Wire.begin(5);
  Wire.onRequest(react);

}

void loop() {
  delay(500);

}

void react(){
  Wire.write("1");
}
