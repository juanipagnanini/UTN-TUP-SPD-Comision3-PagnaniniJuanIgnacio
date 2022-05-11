// Act 2 Clase 04/05/22 SPD
// Timbre
int Led_Blue = 12;
int Buzer_Pin = 6;
int Boton_Pin = 2;
int inputValue = 0;

void setup()
{
  pinMode(Led_Blue, OUTPUT);
  pinMode(Buzer_Pin, OUTPUT);
  pinMode(Boton_Pin, INPUT);
  delay(250);
  digitalWrite(Led_Blue, 1);
  tone(Buzer_Pin, 900, 250);
  delay(500);
  digitalWrite(Led_Blue, 0);
  tone(Buzer_Pin, 900, 250);
  delay(500);
  digitalWrite(Led_Blue, 1);
  tone(Buzer_Pin, 900, 250);
  delay(800);
  digitalWrite(Led_Blue, 0);
}

void loop()
{
  // Lectura Digital
  inputValue = digitalRead(Boton_Pin);
  if (inputValue == HIGH)
  {
    tone(Buzer_Pin, 440);
    delay(1000);
    noTone(Buzer_Pin);
    delay(500);
    tone(Buzer_Pin, 523, 300);
    delay(500);
  }
  else
  {
    noTone(Buzer_Pin);
  }
  delay(1000);
  digitalWrite(Led_Blue, 1);
  delay(250);
  digitalWrite(Led_Blue, 0);
}