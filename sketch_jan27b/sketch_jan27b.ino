int x = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  x++;
  float y = x*3;

  Serial.print(x);
  Serial.print(" * 3 = ");
  Serial.print(y);
  Serial.println("");


}
  
  

