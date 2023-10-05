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
    volatile int SongBar = 1;
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    { 
        printf("Bar: %d\n", SongBar);
     if         (SongBar == 1) 
     {
      {//D
        redLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
      {//D
        redLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     }
     else if    (SongBar == 2) 
     {
      {//C
        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
      {//C
        redLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     }
     else if    (SongBar == 3) 
     {
      {//B Lower
        redLED = 1;
        buzz.playTone("B");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
      {//B Lower
        redLED = 1;
        buzz.playTone("B");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     }
     else if    (SongBar == 4) 
     {
      {//A# Lower
        redLED = 1;
        buzz.playTone("A#");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
      {//A# Lower
        redLED = 1;
        buzz.playTone("A#");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
    // revert SongBar to repeat the cycle
     SongBar = 0;
     }
     {//D Higher
        redLED = 1;
        buzz.playTone("D", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     {//Rest
      wait_us(WAIT_TIME_MS * 125);
      }
     {//A
        redLED = 1;
        buzz.playTone("A", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     {//Rest
      wait_us(WAIT_TIME_MS * 125);
      }
     {//Rest
      wait_us(WAIT_TIME_MS * 125);
      }
     {//G#
        redLED = 1;
        buzz.playTone("G#");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     {//Rest
      wait_us(WAIT_TIME_MS * 125);
      }
     {//G
        redLED = 1;
        buzz.playTone("G");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     {//Rest
      wait_us(WAIT_TIME_MS * 125);
      }
     {//F Quarter
        redLED = 1;
        buzz.playTone("F");
        wait_us(WAIT_TIME_MS * 200);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 50);
        }
     {//D
        redLED = 1;
        buzz.playTone("D");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     {//F
        redLED = 1;
        buzz.playTone("F");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     {//G
        redLED = 1;
        buzz.playTone("G");
        wait_us(WAIT_TIME_MS * 60);

        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 65);
        }
     SongBar = SongBar + 1;
    }
}