#include <MQ135.h>

void setup() {
  Serial.begin(9600);

}

void loop() {
  MQ135 gasSensor = MQ135(A3);
  float air_quality = gasSensor.getPPM();

  Serial.print("Air Quality: ");
  Serial.print(air_quality);
  Serial.println(" PPM");
  delay(200);

}
