# Sean Prendergast

## Simple Blink

For this assignment, all implemented code would be written in C with the ultimate goal consisting of blinking an LED at a 50% duty cycle such that the LED will turn on and off at equal time intervals at any frequency. This objective was ultimately achieved by incorporating a while loop in the program made to toggle the LED on and off continously on a set delay.

## Processors Utilized
  MSP430FR6989
  MSP430G2553

For this assignment, a program was implemented for both both the MSP430G2553 and 
MSP430FR6989 to allow one of the on-board LEDs to blink at a 50% duty cycle such that
the LED will blink on and off at equal time intervals. The procedure was
very similar for both boards to perform the simple task of blinking one LED at a
consistent rate. The only difference between the MSP430G2553 and 
MSP430FR6989 when implementing both programs was that for the MSP430FR6989, the
GPIO power-on default high impedance mode had to be disabled. The reason this had 
to be disabled as it was initially enabled was because the user is able to access
previously configured port settings after this mode is disabled. In other words, 
if this mode isn't disabled for the MSP430FR6989, the appropriate pins and bits 
assigned to the on-board LEDs would not be able to be utilized.
