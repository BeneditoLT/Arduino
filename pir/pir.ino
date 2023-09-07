const int sensorPin = 2; // Pino conectado ao sensor PIR
const int ledPin = 13; // Pino conectado ao LED

void setup() {
  pinMode(sensorPin, INPUT); // Configura o pino do sensor como entrada
  pinMode(ledPin, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
  int sensorState = digitalRead(sensorPin); // Lê a saída do sensor

  if (sensorState == HIGH) { // Se o sensor detectar movimento
    digitalWrite(ledPin, HIGH); // Aciona o LED
  } else {
    digitalWrite(ledPin, LOW); // Desliga o LED
  }
}