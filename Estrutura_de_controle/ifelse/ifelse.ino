
int a;
int b;
void setup() {
 Serial.begin(9600);

}

void loop() {

a = 1;
b = 2;
  if (a > b) {
    Serial.print("A é maior que B");
} else {
    Serial.print("B é maior que A");
}

while(1){}
      
}
