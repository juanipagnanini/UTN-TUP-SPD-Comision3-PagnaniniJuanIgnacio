// Act 1 Clase 11/05/22 SPD

int readValue = 0;
int lastValue = 1;
int sensorPin = A0;
float voltsValue;
float tempValue;
void setup()
{
Serial.begin(9600);
}
void loop()
{
readValue = analogRead(sensorPin);
if (lastValue != readValue) {
Serial.print("readValue: ");
Serial.print(readValue);
lastValue = readValue;
voltsValue = 5.0 / 1024 * readValue;
Serial.print(" -> voltsValue: ");
Serial.print(voltsValue);
tempValue = voltsValue * 100 - 50;
Serial.print(" -> tempValue: ");
Serial.println(tempValue);
}
delay(100);
}