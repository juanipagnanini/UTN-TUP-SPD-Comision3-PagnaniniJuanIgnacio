// Act2 Clase 20-04-22

int Ledrojo = 9, Ledazul = 5, Ledverde = 3;
int interruptor = 2;
int potenc = A0;
int sensorValue = 0;
int outputValue = 0;
int inputValue = 0;

void setup()
{
  pinMode(Ledrojo, OUTPUT);
  pinMode(Ledazul, OUTPUT);
  pinMode(Ledverde, OUTPUT);
  pinMode(interruptor, INPUT);
  Test_Led();
}

void loop()
{
  inputValue = digitalRead (interruptor);
  if (inputValue == 1)
  {
  	for (int fadeValue = 0; fadeValue <= 255; fadeValue +=5)
    {
      analogWrite(Ledrojo, fadeValue);
      delay(100);
    }
    for (int fadeValue = 255; fadeValue <=800; fadeValue +=10)
    {
      analogWrite(Ledazul, fadeValue);
      delay(100);  
    }
    for (int fadeValue = 800; fadeValue <=1023; fadeValue +=10)
    {
      analogWrite(Ledverde, fadeValue);
      delay(100);  
    }
  }
  else
  {
    sensorValue = analogRead(potenc);
    outputValue = map (sensorValue, 0, 1023, 0, 255);
    analogWrite(Ledrojo, outputValue);
  }
}

void Test_Led()
{
  digitalWrite(Ledrojo, 1);
  delay(500);
  digitalWrite(Ledazul, 1);
  delay(500);
  digitalWrite(Ledrojo, 0);
  delay(500);
  digitalWrite(Ledazul, 1);
  delay(500);
  digitalWrite(Ledverde, 1);
  delay(500);
  digitalWrite(Ledazul, 0);
  delay(500);
  digitalWrite(Ledrojo, 1);
  delay(500);
  digitalWrite(Ledverde, 1);
  delay(500);
}