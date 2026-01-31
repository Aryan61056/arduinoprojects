#define trigpin A2
#define echopin A1

int distance;
long duration;

void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(distance*0.0344)/2;

  switch(distance)
  {
    case 10 ... 30:
    Serial.println("Near");
    delay(200);
    break;

    case 36 ... 60:
    Serial.println("Far");
    delay(200);
    break;

    default:
    Serial.println("Can Not Find Object");
  }
  delay(100);


}
