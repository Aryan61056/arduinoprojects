#include <Wire.h>
void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println("I2C SCANNER. SCANNING...");
  int count = 0;
  Wire.begin();
  for(byte i = 0; i<128;i++){
    Wire.beginTransmission(i);
    if(Wire.endTransmission()==0){
      Serial.print("Found address: ");
      Serial.print(i,DEC);
      Serial.print("(0x");
      Serial.print(i,HEX);
      Serial.print(")");
      count++;
      delay(1);
    }
  }
  Serial.println("Done");
  Serial.print("Found");
  Serial.print(count, DEC);
  Serial.println("device(s)");



}

void loop() {
  // put your main code here, to run repeatedly:

}
