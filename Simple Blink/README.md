# Sean Prendergast

## Simple Blink

For this assignment, all implemented code would be written in C with the ultimate goal consisting of blinking an LED at a 50% duty cycle such that the LED will turn on and off at equal time intervals at any frequency. This objective was ultimately achieved by incorporating a while loop in the program made to toggle the LED on and off continously on a set delay.

## Processors Utilized
* MSP430FR6989
* MSP430G2553

## Dependencies
This library would only be dependent on the MSP430.h header file used for all TI MSP430 processors. The MSP430.h header file is included in each C file submitted as no other header files were required for the assignment.

## Differences in implementation for FR6989 and G2553
The only existing difference regarding the implementation for both boards was that for the MSP430FR6989, the GPIO power-on default high impedance mode had to be disabled prior to testing. The reason behind this action is because the user will not be able to access any previously configured port settings if the default high-impedance mode isn't disabled. To put this into simpler terms, the user will not be able to utilize the appropriate ports and bits assigned to the on-board LEDs if this mode isn't disabled.
