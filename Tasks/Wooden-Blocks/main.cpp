#include "mbed.h"

// Create a DigitalOut “object” called greenLED. Pass constant LED1 as a “parameter”
DigitalOut greenLED(LED1);
DigitalOut blueLED(LED2);
DigitalOut redLED(LED3);

//Your task is to make a sequence alternating between Green+Red and just Blue 

//The main function - all executable C / C++ applications have a main function. This is our entry point in the software
int main() 
{
    // ALL the repeating code is contained in a  “while loop”
    while(true) 
    { 
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
        //rest
        wait_us(250000);
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
       //rest
        wait_us(250000);
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
       //rest
        wait_us(250000);
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
     {//beat
       greenLED = 1; 

        // Wait 0.10 seconds
        wait_us(100000); 

        greenLED = 0;

        // Wait 0.15 seconds
        wait_us(150000);
     }
       //rest
        wait_us(250000);
    }
}