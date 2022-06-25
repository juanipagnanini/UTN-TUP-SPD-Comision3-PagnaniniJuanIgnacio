//Clase 15-06-22 SPD
int sensor=7;
int led=13;
int duracion;
int distancia;

void setup()
{
  	pinMode(sensor, OUTPUT);
  	pinMode(sensor, INPUT);
  	pinMode(led, OUTPUT);
  	Serial.begin(9600);
}

void loop()
{
	digitalWrite(sensor, HIGH);
  	delay(1);
  	digitalWrite(sensor, LOW);
  	duracion= pulseIn(sensor, HIGH);
  	distancia= duracion/58.2;
  	Serial.println(distancia);
  	delay(200);
  	if(distancia<=20 && distancia>=0)
    {
    	digitalWrite(led, HIGH);
    	delay(distancia*10);
  		digitalWrite(led, LOW);
  	}   
}