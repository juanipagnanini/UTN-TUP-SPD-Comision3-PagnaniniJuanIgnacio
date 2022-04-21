// Act 1 clase 20-04-22

int LedRojo = 11;
int LedVerde = 7;
int Potenc = A0;
int SensorValue = 0;
int outputValue = 0;

void setup()
{
  pinMode(LedRojo, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  Test_Led();
}

void loop()
{
  SensorValue = analogRead(Potenc);
  outputValue = map (SensorValue, 1023, 0, 255, 0);
  analogWrite(LedRojo, outputValue);
  
  outputValue = map (SensorValue, 0, 1023, 0, 255);
  analogWrite(LedVerde, outputValue);

}

void Test_Led()
{
  digitalWrite(LedRojo, 1);
  delay (500);
  digitalWrite(LedRojo, 0);
  delay (500);
  digitalWrite(LedVerde, 1);
  delay (500);
  digitalWrite(LedVerde, 0);
  delay (500);
  digitalWrite(LedRojo, 1);
  delay (500);
  digitalWrite(LedRojo, 0);
  delay (500);
  digitalWrite(LedVerde, 1);
  delay (500);
  digitalWrite(LedVerde, 0);
  delay (500);
}