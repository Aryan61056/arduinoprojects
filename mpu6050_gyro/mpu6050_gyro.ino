#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

#include <Wire.h>

Adafruit_MPU6050 mpu;
void setup() {
  Serial.begin(115200);

  if(!mpu.begin())
  {
    Serial.print("Failed to find MPU6050 chip");
    while(1)
    {
      delay(10);
    }
  }
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G)
  mpu.setFilterBandwith(MPU6050_BAND_21_HZ);
  delay(100);
}

void loop() {
  sesnor_event_t a,g,temp;
  mpu.getEvent(&a,&g,&temp);  
  
  Serial.print(g.gyro.x);
  Serial.print(",");
  Serial.print(g.gyro.y);
  Serial.print(",");
  Serial.print(g.gyro.z);
  Serial.print("");

  
}
