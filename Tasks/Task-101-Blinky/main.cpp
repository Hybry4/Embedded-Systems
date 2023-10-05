#include "mbed.h"

// Create a DigitalOut “object” called greenLED. Pass constant LED1 as a “parameter”
DigitalOut greenLED(LED1);
DigitalOut blueLED(LED2);
DigitalOut redLED(LED3);

// Your task is to make a sequence alternating between Green+Red and just Blue 

// The main function - all executable C / C++ applications have a main function. This is our entry point in the software
int main() 
{
    // ALL the repeating code is contained in a  “while loop”
    while(true) 
    // 3 second loop in which the blue LED briefly flashes
  {
      blueLED = 1;
      //wait 0.1 seconds
      wait_us(100000);
      blueLED = 0;
      //wait 2.9 seconds
      wait_us(2900000);

  }  
}