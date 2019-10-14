# Multiple Blink
Now that we have blinked at least 1 LED, what about blinking multiple LEDS at the same time? The minimum that you need to develop is blinking at least two LEDs at two different rates. Although I am not going to give you a speed, you should probably pick a rate which is visible to a standard human. I really hope that you take this further and perform some of the extra work for this part of the lab exercise.


# YOU NEED TO CREATE THE FOLLOWING FOLDERS
* MSP430G2553
* MSP(FILL IN WITH WHAT YOU ARE USING)

## README
Remember to replace this README with your README once you are ready to submit. I would recommend either making a copy of this file or taking a screen shot. There might be a copy of all of these README's in a folder on the top level depending on the exercise.

## Extra Work
When you take a look at the development boards, you are limited to what is built into the platform.

### Even More LEDs
Since up to this point you should have hopefully noticed that you are simply just controlling each pin on your processor. So... what is keeping you from putting an LED on each pin? Can you actually control the speed of each of these LEDs?

### Patterned Lights
If you can control a ton of LEDs, what is keeping you from having a little fun? Why not try and make something like a moving face or other moving object in lights. *CAUTION* I would only do this if you have finished the rest of the lab.

### UART Pattern Control
If you have been using UART, could you set which LEDs are on or off based off some UART command? Would you want to send an Array over UART such as [1 0 1 0] or would you want to send a byte that corresponds to the status? Can you not only say which LEDs are on, but also tell them to blink at a particular rate if they were on (so LED1 Blink every 100ms)?


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
