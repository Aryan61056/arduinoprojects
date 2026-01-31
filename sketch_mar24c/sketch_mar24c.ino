int j = 0; 
void setup(){ 
Serial.begin(9600);
}
void loop(){
do {
Serial.println("We are in do while");
} while ( j > 5);
Serial.println("Out of do while");
j++;
Serial.println(j);
delay(500);
}