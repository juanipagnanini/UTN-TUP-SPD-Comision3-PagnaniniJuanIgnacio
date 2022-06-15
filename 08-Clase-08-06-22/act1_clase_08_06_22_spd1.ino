// Actividad 1 Clase 08-06-22 SPD

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String textoFila = "Hola Mundo!!";
 
void setup() 
{
	Serial.begin(9600);
    lcd.begin(16, 2);
}
 
void loop() 
{
  int Texto=textoFila.length();

  for(int i= Texto; i>0 ; i--)
  {
    String Texto = textoFila.substring(i-1);
 
    lcd.clear();
 
    lcd.setCursor(0, 0);
 
    lcd.print(Texto);
 
    delay(300);
  }
 
  for(int i=1; i<=16;i++)
  {
    lcd.clear();
 
    lcd.setCursor(i, 0);
 
    lcd.print(textoFila);
 
    delay(300);
  }
 
  for(int i=16;i>=1;i--)
  {
    lcd.clear();
 
    lcd.setCursor(i, 1);
 
    lcd.print(textoFila);
 
    delay(300);
  }
 
  for(int i=1; i<= Texto ; i++)
  {
    String Texto = textoFila.substring(i-1);
 
    lcd.clear();
 
    lcd.setCursor(0, 1);
 
    lcd.print(Texto);
 
    delay(300);
  }
}