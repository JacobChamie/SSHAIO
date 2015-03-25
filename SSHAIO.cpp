#include "Arduino.h"
#include "SSHAIO.h"
#include "MemoryFree.h" 

String input = "";
int pin;
void SSHAIO::inputSystem()
//Pins 2, 4, 7, 8, 12, and 13 can be turned on 
{
	if (Serial.available() > 0)
	{
		while (Serial.available() > 0)
		{
			input += char(Serial.read());
			delay(250);
		}
		if(input == ("HELLO\n"))
		{		
			delay(250);
			SSHAIO::hello();
			input = "";
		}
		else if(input == ("MEM\n"))
		{
			SSHAIO::memoryFree();
			input = "";
		}
		else if(input == ("PIN 13 HIGH\n"))
		{
			SSHAIO::PIN13HIGH();
			input = "";
		}
		else if(input == ("PIN 13 LOW\n"))
		{
			SSHAIO::PIN13LOW();
			input = "";		
		}
		else if(input == ("PIN 12 HIGH\n"))
		{
			SSHAIO::PIN12HIGH();	
			input = "";
		}
		else if(input == ("PIN 12 LOW\n"))
		{
			SSHAIO::PIN12LOW();
			input = "";
		}
		else if(input == ("PIN 8 HIGH\n"))
		{
			SSHAIO::PIN8HIGH();
			input = "";
		}
		else if(input == ("PIN 8 LOW\n"))
		{
			SSHAIO::PIN12LOW();
			input = "";
		}
		else if(input == ("PIN 7 HIGH\n"))
		{
			SSHAIO::PIN7HIGH();
			input = "";
		}
		else if(input == ("PIN 7 LOW\n"))
		{
			SSHAIO::PIN7LOW();
			input = "";
		}
		else if(input == ("PIN 4 HIGH\n"))
		{
			SSHAIO::PIN4HIGH();
			input = "";
		}
		else if(input == ("PIN 4 LOW\n"))
		{
			SSHAIO::PIN4LOW();
			input = "";
		}
		else if(input == ("PIN 2 HIGH\n"))
		{
			SSHAIO::PIN2HIGH();
			input = "";
		}
		else if(input == ("PIN 2 LOW\n"))
		{
			SSHAIO::PIN2LOW();
			input = "";
		}
		else if(input == ("PIN\n"))
		{
			SSHAIO::pinError();
			input = "";
		}		
		else
		{
			delay(250);
			SSHAIO::unknown();
			input = "";
		}	
	}
}
void SSHAIO::loadText()
{
	Serial.println("SSHAIO: Serial SHell Arduino Input Output");
	SSHAIO::memoryFree();
	Serial.println("[OK]");
}
void SSHAIO::memoryFree()
{
	Serial.print(freeMemory());	
	Serial.println(" Bytes of Free Memory");
}
void SSHAIO::hello()
{
	Serial.println("Hello, World!");
}
void SSHAIO::PIN13HIGH()
{
	pinMode(13, OUTPUT);
	digitalWrite(13, HIGH);
	Serial.println("SSHAIO: Pin 13 is now at HIGH state");
}
void SSHAIO::PIN13LOW()
{
	pinMode(13, OUTPUT);
	digitalWrite(13, LOW);
	Serial.println("SSHAIO: Pin 13 is now at LOW state");
}
void SSHAIO::PIN12HIGH()
{
	pinMode(12, OUTPUT);
	digitalWrite(12, HIGH);
	Serial.println("SSHAIO: Pin 12 is now at HIGH state");
}
void SSHAIO::PIN12LOW()
{
	pinMode(12, OUTPUT);
	digitalWrite(12, LOW);
	Serial.println("SSHAIO: Pin 12 is now at LOW state");
}
void SSHAIO::PIN8HIGH()
{
	pinMode(8, OUTPUT);
	digitalWrite(8, HIGH);
	Serial.println("SSHAIO: Pin 8 is now at HIGH state");
}
void SSHAIO::PIN8LOW()
{
	pinMode(8, OUTPUT);
	digitalWrite(8, LOW);
	Serial.println("SSHAIO: Pin 8 is now at LOW state");
}
void SSHAIO::PIN7HIGH()
{
	pinMode(7, OUTPUT);
	digitalWrite(7, HIGH);
	Serial.println("SSHAIO: Pin 7 is now at HIGH state");
}
void SSHAIO::PIN7LOW()
{
	pinMode(7, OUTPUT);
	digitalWrite(7, LOW);
	Serial.println("SSHAIO: Pin 7 is now at LOW state");
}
void SSHAIO::PIN4HIGH()
{
	pinMode(4, OUTPUT);
	digitalWrite(4, HIGH);
	Serial.println("SSHAIO: Pin 4 is now at HIGH state");
}
void SSHAIO::PIN4LOW()
{
	pinMode(4, OUTPUT);
	digitalWrite(4, LOW);
	Serial.println("SSHAIO: Pin 4 is now at LOW state");
}
void SSHAIO::PIN2HIGH()
{
	pinMode(2, OUTPUT);
	digitalWrite(2, HIGH);
	Serial.println("SSHAIO: Pin 2 is now at HIGH state");
}
void SSHAIO::PIN2LOW()
{
	pinMode(2, OUTPUT);
	digitalWrite(2, LOW);
	Serial.println("SSHAIO: Pin 2 is now at LOW state");
}
void SSHAIO::unknown()
{
	Serial.println("SSHAIO: Unknown Command!");
}
void SSHAIO::pinError()
{
	Serial.println("SSHAIO: Improper Syntax: PIN (Number) <State>");
}
