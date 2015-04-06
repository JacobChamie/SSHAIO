# SSHAIO
Serial SHell Arduino Input/Output
---------------------------------

Needs ethernet sheild, or an SD card module for Version 0.0.2 Onwards


This is a "shell" which can be used to do certain tasks on the Arduino microcontroller.
For example: If you enter in the command: PIN 7 HIGH, pin 7 will turn on. PIN 7 LOW would turn it off.
This is in Alpha, may be very buggy.

For previous Versions read the README.md in their folder

CAT command Version 0.0.3 Onwards
--------------------------------------------------
Load 8 Files on SD Card
Name them FILE1.txt, FILE2.txt, etc. Up to FILE8.txt
"CAT 1" will read FILE1.txt, "CAT 2" will read FILE2.txt, etc.

#IMPORTANT: REQUIRED LIBARIES:

  Arduino-MemoryFree: https://github.com/mpflaga/Arduino-MemoryFree
  
  Arduino SD Library: http://arduino.cc/en/Reference/SD (Needed from Version 0.0.2 Onwards)
