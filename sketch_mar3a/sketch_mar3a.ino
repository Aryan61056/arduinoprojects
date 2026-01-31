int led = 9;
int sw1 = 3;
int sw2 = 4;
int sw3 = 5;
int sw4 = 6;

void setup() 
{
 pinMode(led,OUTPUT);
 pinMode(sw1,INPUT);
 pinMode(sw2,INPUT);
 pinMode(sw3,INPUT);
 pinMode(sw4,INPUT);
}

void loop() 
{
if (digitalRead(sw1)==LOW)
{
analogWrite(led,64);
}

if (digitalRead(sw2)==LOW)
{
analogWrite(led,127);
} 
if (digitalRead(sw3)==LOW)
{
analogWrite(led,191);
} 
if (digitalRead(sw4)==LOW)
{
analogWrite(led,255);
} 
}


// // C++ code
// //
// int LED = 6;
// int pwm = 10;

// void setup()
// {
//   pinMode(LED, OUTPUT);
// }

// void loop()
// {
//   for ( pwm = 1; pwm<=255; pwm++){
//  	analogWrite(LED, pwm);

//   }
//   for ( pwm = 1; pwm<=255; pwm--){
//  	analogWrite(LED, pwm);
//   }

// }