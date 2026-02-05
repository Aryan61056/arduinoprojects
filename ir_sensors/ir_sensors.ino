int IR1 =2;
int IR2 = 3;
int IR3 = 4;
int IR4 = 7;
int IR5 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  pinMode(IR4,INPUT);
  pinMode(IR5,INPUT);

}

void loop() {
  int sensor1 = digitalRead(IR1);
  int sensor2 = digitalRead(IR2);
  int sensor3 = digitalRead(IR3);
  int sensor4 = digitalRead(IR4);
  int sensor5 = digitalRead(IR5);

  Serial.print("IR1 = ");
  Serial.println(sensor1);
  Serial.print("IR2 = ");
  Serial.println(sensor2);
  Serial.print("IR3 = ");
  Serial.println(sensor3);
  Serial.print("IR4 = ");
  Serial.println(sensor4);
  Serial.print("IR5 = ");
  Serial.println(sensor5);
  Serial.println("*************");
  delay(200);

}
