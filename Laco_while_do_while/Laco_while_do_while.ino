int index = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {

  while (index <= 10) {
    Serial.print("Laço while index = ");
    Serial.println(index);
    index ++;
  }

  //index = 0;

  do {
    Serial.print("Laço do while index = ");
    Serial.println(index);
    index ++;
  } while (index <= 10);

  while (true) {}

}
