int sw1 = 2;
int sw2 = 3;
int ScoreA = 0;
int ScoreB = 0;
void setup() 
{
 Serial.begin(9600);
 pinMode(sw1,INPUT);
 pinMode(sw2,INPUT);

}
void loop() 
{
  if(digitalRead(sw1)==LOW)
  {
    ScoreA++;
    Serial.print("Team A score is = ");
    Serial.println(ScoreA);
    delay(1000);
  }
  if(digitalRead(sw2)==LOW)
  {
    ScoreB++;
    Serial.print("Team B score is = ");
    Serial.println(ScoreB);
    delay(1000);
  }
}