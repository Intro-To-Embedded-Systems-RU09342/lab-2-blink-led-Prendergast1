// Author: Sean Prendergast
// Code was initially started on September 18th, 2019
// Code was last modified on October 5th, 2019
// Submitted October 17th, 2019
// Exercise: Off Board Blink for MSP430G2553
// For this assignment, the MSP430G2553 processor would be extracted from the board
// and placed on to a breadboard. A reset circuit was implemented including two LEDs and
// two 47k current-limiting resistors to have both LEDs turn on and off at 50% duty cycles, but
// at different rates.
// The board itself was utilized as the power supply for the circuitry implemented
// and appropriate ports were used to toggle the two LEDs at different frequencies.

#include <msp430.h>

int main(void)
{
   WDTCTL = WDTPW | WDTHOLD;    // Stop WDT (watch-dog timer)

   P2DIR |= BIT2;     // Configure P2.2 as output
   P2OUT |= BIT2;     // Configure P2.2 as I/O

   P2DIR |= BIT3;     // Configure P2.3 as output
   P2OUT |= BIT3;     // Configure P2.3 as I/O



   while(1)     // Infinite loop
   {
           P2OUT ^= BIT2;
           __delay_cycles(100000);  // Toggles LED connected to P2.2 from breadboard on and off
           P2OUT ^= BIT2;
           __delay_cycles(100000);  // Doubles the rate the LED connected to P2.2 on and off
           P2OUT ^= BIT3;
           __delay_cycles(100000);  // Toggles second LED connected to P2.3 from breadboard on and off
           // Both of the off board LEDs will blink at different, but extremely fast rates
           // still visible to the user.
   }
}



