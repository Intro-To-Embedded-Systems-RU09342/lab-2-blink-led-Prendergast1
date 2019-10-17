# Sean Prendergast

## Multiple Blink

For this assignment, all implemented code would be written in C with the ultimate goal consisting of having two on-board LEDs blink at different rates for both the MSP430FR6989 and MSP430G2553. This objective was ultimately achieved by incorporating a while loop in the program made to toggle both LEDs on and off continously at different frequencies on a set delay. To ensure the visual result of this assignment was correct, the speed of one of the on-board LEDs blinking on and off would be twice the speed of the other on-board LED. The program was implemented to allow both LEDs to blink on and off at different rates, but still visible to the user.

## Processors Utilized
* MSP430FR6989
* MSP430G2553

## Dependencies
This library would only be dependent on the MSP430.h header file used for all TI MSP430 processors. The MSP430.h header file is included in each C file submitted as no other header files were required for the assignment.

## Differences in implementation for FR6989 and G2553
One difference regarding the implementation for both boards, which will probably be seen for many assignments this semester, was that for the MSP430FR6989, the GPIO power-on default high impedance mode had to be disabled prior to testing. As explained for "Simple Blink", the reason behind this action is because the user will not be able to access any previously configured port settings if the default high-impedance mode isn't disabled. To put this into simpler terms, the user will not be able to utilize the appropriate ports and bits assigned to the on-board LEDs if this mode isn't disabled. Another difference seen in implementation for both boards was that the designated pins and bits assigned to the second on-board LED on the G2553 was different from the FR6989. To elaborate, the second on-board LED on the FR6989 is assigned to P9.7 (Pin 9, Bit 7), while the second on-board LED on the G2553 is assigned to P1.6 (Pin 1, Bit 6). These small differences didn't create anymore difficulty as these pins and bits assigned to the LED would simply need to be rearranged accordingly when implementing Multiple Blink on both boards.
