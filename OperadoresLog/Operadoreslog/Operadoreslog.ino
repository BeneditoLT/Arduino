
int X;
int Y;
int Z;

void setup(){
  Serial.begin(9600);
  }
void loop(){

  X = 3;
  Y = 3;
  Z = 2;

  if(X > Y && X > Z) Serial.println("X é o maior");
  if(X == Y || X == Z) Serial.println("X é igual a Y ou igual a Z");
  if(!X) Serial.println("X não é verdadeiro");

  while(true)
  {}
  
  }
