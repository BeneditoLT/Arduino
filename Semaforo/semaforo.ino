#define ledr 13
#define ledy 12
#define ledg 11

void setup()
{
    pinMode(ledr, OUTPUT);
    pinMode(ledy, OUTPUT);
    pinMode(ledg, OUTPUT);
}

void loop()
{
    digitalWrite(ledg, HIGH);
    delay(300);
    digitalWrite(ledg, LOW);
    digitalWrite(ledy, HIGH);
    delay(300);
    digitalWrite(ledy, LOW);
    digitalWrite(ledr, HIGH);
    delay(300);
    digitalWrite(ledr, LOW);
    
}