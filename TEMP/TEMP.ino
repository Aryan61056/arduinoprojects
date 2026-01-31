int TEMP = A1;
int sensor = 0;

void setup() {
  pinMode(TEMP,INPUT);
  Serial.begin(9600);

}

void loop() {
  sensor = analogRead(TEMP);
  float voltage = (sensor/1023.0)*5;
  float temperatureC = voltage * 100;
  float temperatureF = (temperatureC*9/5)+32;
  Serial.println("-------------------------");
  Serial.print("Temperature in Celcius = ");
  Serial.println(temperatureC);
  Serial.print("Temperature in Farenheit = ");
  Serial.println(temperatureF);
  delay(1000);
}
