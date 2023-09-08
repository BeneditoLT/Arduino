
int a = 0;
int b = 0;
int c = 0;

void setup(){

  Serial.begin(9600);
}

void loop(){
  a = 7;
  b = 4;
  c = a + b;
    
  Serial.println(c);
  while(true)
{}


}
