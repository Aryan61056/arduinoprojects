
// #include <Ultrasonic.h>
// Ultrasonic sensor(2, 3); // trig,echo
// int distance;

// void setup(){
//   Serial.begin(9600);
// }

// void loop() {
//   distance = sensor.read();
//   Serial.print("Distance = ");
//   Serial.print(distance/2.54);
//   Serial.println(" IN");
//   delay(250);
// }


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
  delayMicroseconds(5);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distcm = (duration/2)*0.034;

  Serial.print("Distance = ");
  Serial.print(distcm);
  Serial.println("CM");
  delay(250);
} 

