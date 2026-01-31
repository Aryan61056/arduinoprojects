// C++ code
//
int led1= 5;
int led2 = 4;
int led3 = 3;
int led4 = 2; 
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop()
{
  int potValue = analogRead(A0);
  Serial.println(potValue);


  digitalWrite(led1,HIGH);
  delay(potValue);
  digitalWrite(led2,HIGH);
  delay(potValue);
  digitalWrite(led3,HIGH);
  delay(potValue);
  digitalWrite(led4,HIGH);
  delay(potValue);
  digitalWrite(led4,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led1,LOW);
  delay(200);



  /*
  if (potValue > 500)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  else{
  	digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    */
  
}
/*
int led1= 5;
int led2 = 4;
int led3 = 3;
int led4 = 2; 
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop()
{
  int potValue = analogRead(A0);
  Serial.println(potValue);


  
  if (potValue> 10 && potValue< 200)
  {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(50);

  }
else if (potValue> 200 && potValue< 400)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(50);
  
}
else if (potValue> 400 && potValue< 600)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  delay(50);
  
}
else if (potValue> 600 && potValue< 800)
  {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(50);
}
else{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(50);
}}