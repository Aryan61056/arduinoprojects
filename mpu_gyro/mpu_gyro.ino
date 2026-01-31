#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2);
Adafruit_MPU6050 mpu;

int EN1 = 5;
int EN2 = 6;
int in1 = 10;
int in2 = 12;


void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

  Serila.begin(115200);
  if (!mpu.begin)
  {
    Serial.println("Failed to find MPU6050 chip");
    while (1)
    {
      delay(10);
    }
  }
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwith(MPU6050_BAND_21_HZ);
  delay(100);
}

void loop() {
  sensors_event_t a,g,temp
  mpu.getEvent(&a, &g, &)

  Serial.print("X: ");
  Serialprint(g.gyro,x);
  Serial.print(",");
  Serial.print("Y: ");
  Serialprint(g.gyro,y);
  Serial.print(",");
  Serial.print("Z: ");
  Serialprint(g.gyro,z);
  Serial.print(",");
  delay(10);

  if(g.gyro.y>2)
  {
    run(255,255);
    lcd.setCursor(0,0);
    lcd.print("Inclined Surface");
    delay(2000);
  } else if (g.gyro.y<-2){
    run(100,100);
    lcd.setCursor(0,0);
    lcd.print("Declined Surface");
    delay(2000);
  }
  else 
  {
    run(160,160); 
  }}
  void run(int M1, int M2) {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,HIGH);
    analogWrite(EN1,M1);
    analogWrite(EN2,M2);
  }

}
