void setup() {
  // put your setup code here, to run once:

}

void loop() {

  int j=7;
  int j=3;
  int k;
  int a;
  int b;
  int c;

  k=myMultiplyFunction(i,j);
  a=myDivisionFunction(i,j);
  b=myAdditionFunction(i,j);
  c=mySubstractionFunction(i,j);
  Serial.println(k);
  delay(500);

}


int myMultiplyFunction(int x, int y){
  int result;
  result=x*y;
  return result;
}

int myDivisionFunction(int x, int y){
  int result;
  result=x/y;
  return result;
}

int myAdditionFunction(int x, int y){
  int result;
  result=x+y;
  return result;
}

int mySubstractionFunction(int x, int y){
  int result;
  result=x-y;
  return result;
}