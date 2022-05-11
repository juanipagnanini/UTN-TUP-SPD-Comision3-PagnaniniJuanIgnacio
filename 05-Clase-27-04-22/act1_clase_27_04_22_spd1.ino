// Ejercicio 1 Clase 27-04-22 SPD

int Piezo_Pin = 10;
int FotoR_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
Serial.begin(9600);
pinMode(Piezo_Pin, OUTPUT);
}
void loop()
{
 digitalWrite(Piezo_Pin, HIGH);
 sensorValue = analogRead(FotoR_Pin);
 outputValue = map(sensorValue, 0, 1023, 0, 255);
 analogWrite(Piezo_Pin, outputValue);
 Serial.print("Lectura: ");
 Serial.println(sensorValue);
 Serial.print("Mapeado: ");
 Serial.println(outputValue);
 delay(250);
 digitalWrite(Piezo_Pin, LOW);
 delay(250);
}