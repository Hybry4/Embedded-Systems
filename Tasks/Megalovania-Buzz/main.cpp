// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 1000 
DigitalOut redLED(TRAF_RED1_PIN);
Buzzer buzz;
Buttons buttons;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
     {//D
        redLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 100);  //100ms
        }
     {//D
        redLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 100);  //100ms
        }
     {//D Higher
        redLED = 1;
        buzz.playTone("D", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 300);  //300ms
        }
     {//A
        redLED = 1;
        buzz.playTone("A", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);  //1000ms
        }
    }
}