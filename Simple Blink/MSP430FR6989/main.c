// Sean Prendergast
// Code was initially started on September 18th, 2019
// Code was last modified on ...
// Submitted October 17th, 2019
// Exercise: Simple Blink for MSP430FR6989
/* The objective in this exercise is essentially to write a program
to allow the LED on an MSP430FR6989 to blink on and off at a consistent rate
visible to the user.
 */

#include <msp430.h> // This allows the written program below to operate on MSP430 board
#include <stdio.h> // stdio (Standard Input and Output Library when using C language)

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT (watchdog timer)
                                            /* WDT (Line 16) automatically generates when
                                            creating main.c file*/

    PM5CTL0 &= ~LOCKLPM5;                   /* Disable the GPIO power-on default high-impedance mode
                                            to activate previously configured port settings*/

    // Configure GPIO (General-Purpose Input/Output)
    /* In other words, configure specific pins and bits on MSP430
    required to operate desired LED */
    // Desired LED on MSP430 is assigned to P1.0 (Pin 1, Bit 0)

    // " |= " (OR) Operator below is utilized to turn specific pins and bits on (P1.0)
    P1DIR |= BIT0;  // Sets P1.0 (LED) to output direction
                    // OR operator to set BIT0 to act as output for Pin 1
    P1OUT |= BIT0;  // Clear P1.0 output latch for a defined power-on state for LED1

    while(1)    // Infinite while loop
    {
        P1OUT ^= BIT0;                      /* Exclusive OR (XOR) is utilized
                                            to toggle LED between on and off*/
        __delay_cycles(100000);          /* Function to monitor the frequency the LED blinks,
                                          this function delays the clock at a speed where the
                                          LED is blinking at a pace that is visible to the user*/

       // In this case, the delay is set for 100000 cycles
       // One executed cycle is equivalent to 0.9 microseconds
       // 100000 cycles * 0.9 microseconds/cycle = 0.09 second delay
       // This basically means the LED blinks at an extremely fast rate but still visible for user

       // To ensure this program worked accordingly, the LED would be tested at different rates
       // __delay_cycles(10000);
       // __delay_cycles(1000);
    }
}
