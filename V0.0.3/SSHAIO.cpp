#include "Arduino.h"
#include "SSHAIO.h"
#include "MemoryFree.h" 
#include "SD.h"

String input = "";
char* CFile = "";
void SSHAIO::inputSystem()
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
		else if(input == ("CAT 1\n"))
		{
			CFile = "";
			CFile = "FILE1.txt"; 
			SSHAIO::cat();		
			input = "";
		}
		else if(input == ("CAT 2\n"))
		{
			CFile = "";
			CFile = "FILE2.txt";
			SSHAIO::cat();
			input = "";
		}
		else if(input == ("CAT 3\n"))
		{
			CFile = "";
			CFile = "FILE3.txt";
			SSHAIO::cat();
			input = "";
		}
		else if(input == ("CAT 4\n"))
		{
			CFile = "";
			CFile = "FILE5.txt";
			SSHAIO::cat();
			input = "";
		}
		else if(input == ("CAT 5\n"))
		{
			CFile = "";
			CFile = "FILE5.txt";
			SSHAIO::cat();
			input = "";
		}
		else if(input == ("CAT 6\n"))
		{
			CFile = "";
			CFile = "FILE6.txt";
			SSHAIO::cat();
			input = "";
		}
		else if(input == ("CAT 7\n"))
		{
			CFile = "";
			CFile = "FILE7.txt";
			SSHAIO::cat();
			input = "";
		}
		else if(input == ("CAT 8\n"))
		{
			CFile = "";
			CFile = "FILE8.txt";
			SSHAIO::cat();
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
		else
		{
			delay(250);
			SSHAIO::unknown();
			input = "";
		}	
	}
}
void SSHAIO::SDBegin()
{
	Serial.println("INITIALIZING SD");
	pinMode(4, OUTPUT);
	if (!SD.begin(4))
	{
		Serial.println("SD INITIALIZATION	[FAIL!]");
		return;
	}
	Serial.println("SD INITIALIZATION	[OK!]");
}
void SSHAIO::cat()
{
	File catFile = SD.open(CFile);
	if (catFile) {
		while (catFile.available()){
			Serial.write(catFile.read());
		}
		catFile.close();
	}
	else {
		Serial.print("Error Opening: ");
		Serial.println();
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
