int x=0;
void setup() {
  Serial.begin(9600); 
while(x<=10){
  Serial.print(x);
  Serial.println("Hello");
  x++;
  delay(500);
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
