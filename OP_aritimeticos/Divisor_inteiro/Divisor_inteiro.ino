int a = 0;
int b = 0;
int c = 0;

void setup(){

  Serial.begin(9600);
}

void loop(){
  a = 7;
  b = 5;
  c = a / b;
  
  Serial.print("A divisao inteira de ");
  Serial.print(a);
  Serial.print(" por ");
  Serial.print(b);
  Serial.print(" é ");  
  Serial.println(c);

  
  while(true)
{}


}
