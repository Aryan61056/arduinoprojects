int EN1 = 5;
int EN2 = 6;
int in1 = 10;
int in2 = 12;

void setup() {
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
    char command=Serial.read();

    switch(command)
    {
      case 'F':
      case'f':o
        run(255,255);
        delay(2000);
      break;

      case 'B':
      case 'b':
        back(255,255);
        delay(2000);
      break;

      case 'R':
      case 'r':
        run(0,255);
        delay(2000);
      break;

      case 'L':
      case 'l':
        run(255,0);
        delay(2000);
      break;

      default:
        run(0,0);

    }
  }

}

void back(int M1, int M2)
{
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
analogWrite(in1, M1);
analogWrite(in2, M2);
}

void run(int M1, int M2)
{
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
analogWrite(in1, M1);
analogWrite(in2, M2);
}