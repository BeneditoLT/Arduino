#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 
int caracter = 0;
int sensorValue = 0;
void setup()
{                    
  lcd.init();
  lcd.backlight();
}
void loop()
{
  sensorValue = analogRead(A0);
  caracter = map(sensorValue, 0, 1023, 0, 255);
  lcd.setCursor(0, 0);
  lcd.print("ASCII");
  lcd.setCursor(9, 0);
  lcd.write(caracter);
  lcd.setCursor(0, 1);
  lcd.print("DECIMAL");
  lcd.setCursor(9, 1);
  lcd.print(caracter);
   delay(500);
  lcd.clear();
 
 }
