
float cleanAirvoltage=1.0; 
float sensitivity=0.2;
float scalefactor=1000;
float covertToPPM(float sensorVoltage, float cleanAirvoltage, float sensitivity, float scalefactor)
{
float ppm = ((sensorVoltage - cleanAirvoltage)/ senstivity) * scalefactor);
return ppm;
}
void setup()
{
  Serial.begin(9600);

}
void loop(){
float sensorVoltage=2.5;
float ppmValue = covertToPPM(float sensorVoltage, float cleanAirvoltage, float sensitivity, float scalefactor); 
Serial.print("ppm value: ");
Seial.println(ppmValue);
}