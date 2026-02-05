int forward;
int backward; 
int right; 
int left;
void setup()
{
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(7, INPUT);
Serial.begin(9600);
pinMode(10, OUTPUT);
pinMode(12, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}
void loop()
forward=digitalRead(4); backward-digitalRead(3);
right=digitalRead(2);
left=digitalRead(7);
Serial.print(forward);
Serial.print(backward);
Serial.print(right);
Serial.print(left);

if (forward==1)
{
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  analogWrite(5,255);
  analogWrite(6,255);
}
if (backward==1)

}
digitalWrite(10, LOW); digitalWrite(12, LOW); analogWrite(5, 255); analogWrite(6,255);
else if(right==1)
{
digitalWrite(10, LOW);
digitalWrite(12,HIGH); analogWrite(5, 255);
analogWrite (6,255);
}
else if(left==1)
{
digitalWrite(10, HIGH); digitalWrite(12, LOW); analogWrite(5, 255); analogWrite(6,255);
// right
// left
}
else
{
digitalWrite(10, LOW);
//STOP
digitalWrite(12, LOW);
analogWrite(5,0);
analogWrite(6,0);
}