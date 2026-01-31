void setup() {
  // put your setup code here, to run once:

}

void loop() {
   if (Serial.available()) {
    String input = Serial.readString();  // Read the input from the serial monitor
    
    // Process the input
    if (input == "+") {
      Serial.println("Recived: +");
    } if (input == "-") {
      Serial.println("Recived: -");
    }
    if (input == "/") {
      Serial.println("Recived: /");
    }
    if (input == "*") {
      Serial.println("Recived: *");
    }
  }
  Serial.print("Number 1?");
  String input1 = Serial.readString();  // Read the input from the serial monitor
  Serial.print("Number 2?");
  String input2 = Serial.readString();  // Read the input from the serial monitor
}
