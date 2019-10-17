# Sean Prendergast

## Off Board Blink

For this assignment, all implemented code would be written in C with the ultimate goal consisting of having two off-board LEDs (external from MSP430) blink on and off at different rates. To achieve this, the C program implemented for this assignment would first have to be flashed/programmed onto the MSP430G2553. Once this step is completed, the physical MSP430G2553 processor would be extracted from the board and placed on to a breadboard. Afterward, a reset circuit would be implemented on the breadboard using the G2553 processor. After reading the datasheet to get a better understanding of what each pin on the processor represents, the reset circuit would be successfully implemented, using two 47k resistors to limit current for both LEDs and using the 3V source from the MSP430 board as the power supply for the reset circuitry. Once the circuitry was complete, both LEDs would blink on and off at different rates, visible to the user. The coding for this assignment was done very similar to multiple blink, apart from the fact that the on-board LEDs were not used. Instead, two I/O (Input/Output) pins from the MSP430G2553 processor would be utilized in the code as a substitute. To elaborate, P2.2 (Pin 1, Bit 2) and P2.3 (Pin 2, Bit 3) which both represent themselves as I/O pins on the G2553, would be set to the output direction and would connect to the two LEDs utilized on the breadboard. A while loop was implemented to toggle P2.2 and P2.3 (which both connect to one of the LEDs on the breadboard) on and off at different rates. I also attached a picture of the reset circuitry implemented and video showcasing the outcome of the program.

## Processors Utilized
* MSP430G2553

## Dependencies
This library would only be dependent on the MSP430.h header file used for all TI MSP430 processors. The MSP430.h header file is included in each C file submitted as no other header files were required for the assignment.


