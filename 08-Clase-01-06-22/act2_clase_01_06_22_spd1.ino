#include <IRremote.h>

int RECV_PIN = 8;
int IRData = 1;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
	Serial.begin(9600);
	irrecv.enableIRIn();
}

void loop() 
{
	if (irrecv.decode(&results))
	{
        IRData = results.value;
        irrecv.resume();
        Serial.print("Datos: ");
        Serial.print(IRData, HEX);
        Serial.print(" {");
        Serial.print(IRData);
        Serial.println("}");
	}
}