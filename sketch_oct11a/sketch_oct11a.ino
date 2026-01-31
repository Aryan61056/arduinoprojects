{
void setup()
Serial.begin(9600);
pinMode(4, INPUT);
pinMode(2, INPUT);
pinMode(7, INPUT);
pinMode(3, INPUT);
}
void loop()
{
Serial.print("A = ");
Serial.print(digitalRead(4));
Serial.print("B = ");
Serial.print(digitalRead(2));
Serial.print("C = ");
Serial.print(digitalRead(7));
Serial.print("D = ");
Serial.print(digitalRead(3));
}