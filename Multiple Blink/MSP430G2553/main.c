// Author: Sean Prendergast
// Code was initially started on September 18th, 2019
// Code was last modified on October 5th, 2019
// Submitted October 17th, 2019
// Excercise: Multiple Blink for MSP430G2553
/* The objective in this exercise is essentially to write a program
to allow two LEDs on the MSP430G2553 to blink on and off at different rates
visible to the user.
 */

#include <msp430.h>
#include <stdio.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT (watch-dog timer)
                                            /* WDT (Line 16) automatically generates when
                                            creating main.c file*/
    // WDT is disabled as it is not needed for this program

    // Configure GPIO (General-Purpose Input/Output)

    /* For the MSP430G2553, LED1 is assigned to P1.0 (Pin 1, Bit 0)
     * LED2 is assigned to P1.6 (Pin 1, Bit 6)
     */

    P1DIR |= BIT0;                         /* OR Pin 1 with Bit 0 to clear output latch
                                            and set Bit 0 as output for Pin 1
                                            */

    P1OUT |= BIT0;                          // Set P1.0 to output direction, turning on LED1

    P1DIR |= BIT6;                          /* OR Pin 1 with Bit 6 to clear output latch
                                            and set Bit 6 as output for Pin 1
                                            */

    P1OUT |= BIT6;                          // Set P1.6 to output direction, turning on LED2

    while(1) // Infinite While Loop
    {
        P1OUT ^= BIT0;                      /* Exclusive OR (^=) is utilized
                                            to toggle LED1 between on and off*/
        __delay_cycles(100000);

        P1OUT ^= BIT0;                      /* Exclusive OR (^=) is utilized
                                            to toggle LED1 between on and off again
                                            to increase the rate LED1 is being toggled*/
        __delay_cycles(100000);             // The rate LED1 is being toggled at is doubled

        P1OUT ^= BIT6;                      /* Exclusive OR (^=) is utilized
                                            to toggle LED2 between on and off*/
        __delay_cycles(100000);
        /* Function to monitor the frequency the LED blinks,
        this function delays the clock at a speed where the
        LED is blinking at a pace that is visible to the user
        */

    }
}
