// Actividad 1 13/04/22 SPD

int Potenc = 0;
int LedRojo = 13;
int LedVerd = 10;
int LedAzul = 4;

void setup()
{
  pinMode(Potenc, INPUT);
  pinMode(LedRojo, OUTPUT);
  pinMode(LedVerd, OUTPUT);
  pinMode(LedAzul, OUTPUT);
}

void loop()
{
  Potenc = digitalRead(2);
  
  if (Potenc == 1)
  {
    digitalWrite(LedRojo, 1);
    delay(1000);
    digitalWrite(LedVerd, 1);
    delay(800);
    digitalWrite(LedAzul, 1);
    delay(600);
    digitalWrite(LedRojo, 0);
    delay(250);
    digitalWrite(LedVerd, 0);
    delay(250);
    digitalWrite(LedAzul, 0);
    delay(250);
    digitalWrite(LedRojo, 1);
    delay(600);
    digitalWrite(LedVerd, 1);
    delay(800);
    digitalWrite(LedAzul, 1);
    delay(1000);
    digitalWrite(LedRojo, 0);
    delay(250);
    digitalWrite(LedVerd, 0);
    delay(250);
    digitalWrite(LedAzul, 0);
    delay(250);
    digitalWrite(LedRojo, 1);
    delay(100);
    digitalWrite(LedVerd, 1);
    delay(300);
    digitalWrite(LedAzul, 1);
    delay(500);
    digitalWrite(LedRojo, 0);
    delay(250);
    digitalWrite(LedVerd, 0);
    delay(250);
    digitalWrite(LedAzul, 0);
    delay(250);
    digitalWrite(LedRojo, 1);
    delay(500);
    digitalWrite(LedVerd, 1);
    delay(300);
    digitalWrite(LedAzul, 1);
    delay(100);
  }
  else (Potenc == 0);
  {
    digitalWrite(LedRojo, 0);
    digitalWrite(LedVerd, 0);
    digitalWrite(LedAzul, 0);
  }
}