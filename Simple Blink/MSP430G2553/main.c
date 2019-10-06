// Sean Prendergast
// Code was initially started on September 18th, 2019
// Code was last modified on ...
// Submitted October 17th, 2019
// Excercise: Simple Blink for MSP430G2553
/* The objective in this exercise is essentially to write a program
to allow the LED on an MSP430G2553 to blink on and off at a consistent rate
visible to the user.
 */

#include <msp430.h>
#include <stdio.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT (watchdog timer)
                                            /* WDT (Line 16) automatically generates when
                                            creating main.c file*/

    // Configure GPIO (General-Purpose Input/Output)
    P1DIR |= BIT0;                          // OR operator to set BIT0 to act as output for Pin 1
    P1OUT |= BIT0;                          // Set P1.0 to output direction, turning on LED1

    while(1)    // Infinite While Loop
    {
        P1OUT ^= BIT0;                      /* Exclusive OR (^=) is utilized
                                            to toggle LED between on and off*/
        __delay_cycles(100000);
        /* Function to monitor the frequency the LED blinks,
        this function delays the clock at a speed where the
        LED is blinking at a pace that is visible to the user
        */

        // In this case, the delay is set for 100000 cycles
        // One executed cycle is equivalent to 0.9 microseconds
        // 100000 cycles * 0.9 microseconds/cycle = 0.09 second delay
        // This basically means the LED blinks at an extremely fast rate but still visible for user

        // To ensure this program worked accordingly, the LED would be tested at different rates
        // __delay_cycles(10000);
        // __delay_cycles(1000);
    }
}

