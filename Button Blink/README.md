# Button Blink
Now that you have looked at blinking the LED from some built in delay, but what if we wanted to control the state of the LED by a button? You may think "Why would I need a Microcontroller to perform the job of a switch?". And that is where you come in. The bare minimum for this part of the lab is to essentially replicate a switch with your development board.

# YOU NEED TO CREATE THE FOLLOWING FOLDERS
* MSP430G2553
* MSP(FILL IN THE PROCESSOR YOU ARE USING)

## README
Remember to replace this README with your README once you are ready to submit. I would recommend either making a copy of this file or taking a screen shot. There might be a copy of all of these README's in a folder on the top level depending on the exercise. Make sure you talk about how your button is configured (momentary or continuous. Normally open or closed. Does the button press indicate when the LED should be on or off.)

## Extra Work
What can we do to make this a little bit more worthy of needing a microcontroller.

### Button Based Speed Control
Much like the UART controlled speed, what if you could cycle between speeds based on a button press? The speed could progress through a cycle of "Off-Slow-Medium-Fast" looping back when you hit the end.

### Color Change
What if upon a button press, the LED which was blinking changed. Some of the development boards contain two LEDs, so you could swap between a Red and a Green LED.

# Sean Prendergast

## Button Blink

For this assignment, all implemented code would be written in C with the ultimate goal consisting of altering the state of the on-board LED, from on and off, simply from the push of the button for both processors. This button is also on-board for both processors and is ultimately utilized as a switch to change the state of the LED. Similar to "Simple Blink" and "Multiple Blink", the on-board LED for both processors have to be set to the output direction, as the LED will function as the output for the program built. Once the pins and bits assigned to the on-board LED are set to the output direction, the pins and bits assigned to the on-board button/switch need to be set as an input pin for both processors. This was achieved by enabling the internal resistor on the board connecting to the on-board button/switch, followed by connecting to the 3.6 V VCC source, which allows the internal resistor to be utilized as a pull-up resistor and prompts the user to use the on-board button/switch to monitor the state of the LED. 

## Processors Utilized
* MSP430FR6989
* MSP430G2553

## Dependencies
This library would only be dependent on the MSP430.h header file used for all TI MSP430 processors. The MSP430.h header file is included in each C file submitted as no other header files were required for the assignment.

## Differences in implementation for FR6989 and G2553

