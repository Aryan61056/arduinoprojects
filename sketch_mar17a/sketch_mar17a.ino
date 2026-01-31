
int x = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  for(x=0; x>=50; x++){
      Serial.println(x);

  }

}
