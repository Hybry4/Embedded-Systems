#include "mbed.h"

DigitalIn ButtonA(PG_0); //Button A
DigitalIn ButtonB(PG_1); //Button B
DigitalOut redLED(PC_2);    //Red Traffic Light

// main() runs in its own thread in the OS
int main()
{
    int btnA;
    int btnB;
    // Turn OFF the red LED
    redLED = 0;

    while (true) {
    
        // Wait for both buttons to be pressed
        do {
            btnA = ButtonA; //Read button A
            btnB = ButtonB; //Read Button B
        } while ((btnA == 0) || (btnB == 0));


        //Toggle the red LED
        redLED = !redLED;

        //Wait for noise to settle (10ms)
        wait_us(10000);

        // Wait for buttons A OR B to be released
        do {
            btnA = ButtonA; //Read button A
            btnB = ButtonB; //Read button B
        } while ((btnA == 1) && (btnB == 1));

        //Toggle the red LED
        redLED = !redLED;

        //Wait for noise to settle (10ms)
        wait_us(10000);
    }
}

