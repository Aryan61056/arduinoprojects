int trigPin = 2;
int echoPin = 3;
long duration, distcm;
void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicrosecond(5);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  distcm = (duration/2)*0.034;

  Serial.print("Distance = ");
  Serial.print(distcm);
  Serial.print("CM");
  delay(250);
} 
