# SSHAIO
Serial SHell Arduino Input/Output
---------------------------------

!!Needs ethernet sheild, or an SD card module for Version 0.0.2 Onwards!!


This is a "shell" which can be used to do certain tasks on the Arduino microcontroller.
For example: If you enter in the command: PIN 7 HIGH, pin 7 will turn on. PIN 7 LOW would turn it off.

AFILE or Action file command Version 0.0.2 Onwards
--------------------------------------------------

  Load 8 Files onto SD card entitling them "FILE1.txt", "FILE2.txt", etc.   
  The "AFILE <NUMBER HERE>" command makes the specified file an "Action File".
  You can read from the files via the "CAT" command.
  More "Action File" features coming soon

#IMPORTANT: REQUIRED LIBARIES:

  Arduino-MemoryFree: https://github.com/mpflaga/Arduino-MemoryFree
  Arduino SD Library: http://arduino.cc/en/Reference/SD (Needed from Version 0.0.2 Onwards)
