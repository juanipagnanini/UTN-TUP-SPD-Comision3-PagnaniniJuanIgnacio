#include <IRremote.h>
int RECV_PIN = 14;
int IRData = 0;
int Led_Pin = 7;
int Led2_Pin = 8;
int Led_Status = 0;
int Led2_Status = 0;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
	Serial.begin(9600);
	pinMode(Led_Pin, OUTPUT);
	pinMode(Led2_Pin, OUTPUT);
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
		if (IRData == 2295)
		{
			if (Led_Status == 0)
			{
                digitalWrite(Led_Pin, 1);
                Led_Status = 1;
            }
			else
			{
                digitalWrite(Led_Pin, 0);
                Led_Status = 0;
            }
			if (IRData == 18615)
			{
				if (Led2_Status == 0)
				{        
        			digitalWrite(Led2_Pin, 1);
       		 		Led2_Status = 1;
    			}
				else
				{
        			digitalWrite(Led2_Pin, 0);
        			Led2_Status = 0;
    			}
			}
		}
	}
}