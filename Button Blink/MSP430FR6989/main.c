// Author: Sean Prendergast
// Code was initially started on September 18th, 2019
// Code was last modified on October 5th, 2019
// Submitted October 17th, 2019
// Excercise: Button Blink for MSP430GFR6989

#include <msp430.h>


int main(void)
{

    WDTCTL = WDTPW | WDTHOLD; // Stop WDT (watch-dog timer)
                              // WDT is disabled as it is not needed for this program

    PM5CTL0 &= ~LOCKLPM5;    /* Disable the GPIO power-on default high-impedance mode
                             to activate configured port settings (utilize buttons and LEDs)*/

    P1DIR |= BIT0;            // Set P1.0 (Pin 1, Bit 0) as the output pin, P1.0 is LED1 on board
    P1REN |= BIT1;            /* Enables internal resistor such that P1.3 (Pin 1, Bit 3)
                             can be connected to 3.6 V (VCC) or ground (GND)*/
    P1OUT |= BIT1;            /* Set P1.1 (Pin 1, Bit 1) as the input pin, in other words,
                              the internal resistor is connected to 3.6 V (VCC) and functions as a pull-up resistor.*/
                              // P1.1 basically represents the button on the MSP430FR6989


    while(1)                   // Infinite while loop
    {
        // Once the program is ran, the LED is initially on and holds the value of 1.
        // Once the button has been pressed once, the LED will toggle
        // Once the button has been released, the LED will stop blinking on and off
        // and remain on or off depending on when the user released the button

        /* If-Statement is implemented such that if the value of Pin 1 input AND Bit 3 does not
         * equal the value of P1.3, the LED will toggle.
         */
        if((P1IN & BIT1)!=BIT1)
        {
            P1OUT ^= BIT0;
            __delay_cycles(180000);
        }
    }
}
