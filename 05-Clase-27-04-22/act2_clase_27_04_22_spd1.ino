// Act 2 Clase 27-04-22
int Lampara = 9;
int Fotorresistencia_Pin = A0;
int Interruptor_Pin = 2;
int sensorValue = 0;
int inputValue = 0;
int counter = 0;
// Limites Inv
int start1 = 18;
int stop1 = 24;
// Limites V
int start2 = 20;
int stop2 = 1;
void setup()
{
Serial.begin(9600);
pinMode(Lampara, OUTPUT);
pinMode(Interruptor_Pin, INPUT);
}
void loop()
{
inputValue = digitalRead(Interruptor_Pin);
if (inputValue == HIGH)
{
Serial.println("Lampara: Encendido");
digitalWrite(Lampara, 1);
}
else
{
if(counter >= start1)
{
sensorValue = analogRead(Fotorresistencia_Pin);
if(sensorValue < 500)
{
Serial.println("Lampara: Encendido");
digitalWrite(Lampara, 1);
} else {
Serial.println("Lampara: Apagado");
digitalWrite(Lampara, 0);
}
}
else
{
Serial.println("Lampara: Apagado");
digitalWrite(Lampara, 0);
}
}
counter++;
Serial.print("Hora: ");
Serial.println(counter);
if (counter == 24)
{
counter =0;
}
 delay(1000);
}