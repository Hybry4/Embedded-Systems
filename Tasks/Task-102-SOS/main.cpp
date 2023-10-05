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
     {//DOT & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 50);  //50ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }

     {//DOT & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 50);  //50ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }

     {//DOT & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 50);  //50ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }

     {//LETTER
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }
     
     {//DASH & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }
     {//DASH & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }
     {//DASH & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 100);  //100ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }
     {//LETTER
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }

     {//DOT & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 50);  //50ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }

     {//DOT & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 50);  //50ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }

     {//DOT & SYM
        redLED = 1;
        buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 50);  //50ms

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);  //50ms
        }
     {//WORD
        wait_us(WAIT_TIME_MS * 250);  //250ms
        }

    }
}