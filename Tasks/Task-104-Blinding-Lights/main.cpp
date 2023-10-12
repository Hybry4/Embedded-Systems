#include "uop_msb.h"
using namespace uop_msb;

int WAIT_TIME_MS = 1000; 
Buzzer buzz;
Buttons buttons;

DigitalOut red(TRAF_RED1_PIN,0);
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

//Object for controlling the LCD
LCD_16X2_DISPLAY lcd;

int main()

{
    lcd.puts("Ready");
    while (buttons.BlueButton == 0);

    red = 1;
    lcd.cls();
    lcd.puts("Tra");
    buzz.playTone("C");
    wait_us(WAIT_TIME_MS * 250);

    amber = 1;
    lcd.cls();
    lcd.puts("Traffic");
    buzz.playTone("E");
    wait_us(WAIT_TIME_MS * 250);

    green = 1;
    lcd.cls();
    lcd.puts("Traffic Lights");    
    buzz.playTone("E", Buzzer::HIGHER_OCTAVE);
    wait_us(WAIT_TIME_MS * 250);
    buzz.rest();
    wait_us(WAIT_TIME_MS * 2000);

    red = 0;
    amber = 0;
    green = 0;

    while (true)
    {
        amber = 0;
        red = 1;
        wait_us(WAIT_TIME_MS * 10000);

        amber = 1;
        wait_us(WAIT_TIME_MS * 2000);

        red = 0;
        amber = 0;
        green = 1;
        while (buttons.BlueButton == 0);

        wait_us(WAIT_TIME_MS * 1000);

        green = 0;
        amber = 1;
        wait_us(WAIT_TIME_MS * 4000);
    }
}
