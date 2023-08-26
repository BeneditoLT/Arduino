int caracter = 32;

void setup() {
  Serial.begin(9600);
}
void loop() {

  Serial.print(" ASCII: ");
  Serial.write(caracter);
  Serial.print(" DECIMAL: ");
  Serial.print(caracter, DEC);
  Serial.print(" HEX: ");
  Serial.print(caracter, HEX);
  Serial.print( " Octal: ");
  Serial.print(caracter, OCT);
  Serial.print(" Binario: ");
  Serial.println(caracter, BIN);
  caracter ++;

  if (caracter == 126) { //Para a contagem em 256 =====

    while (true) {}
  }
}
