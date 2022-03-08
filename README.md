# Color Mixing Lamp

# Stancu Gabriel-Marius

This project simulates a lamp that changes its color
based on the lighting in the room. It is a closed loop
system where the output is based on a constant feedback.
I used an Arduino UNO as the controller, 3 phototransistors
as light sensors, resistors, 3 light filters (blue, green,
and red) and a RGB LED simulating the lamp. I placed the
filters above each sensor, so they cannot transmit random
light input. So one sensor detects the level of red light
waves, another one the green waves, and the other detects
only blue light waves. This information is transmited to
the controller and then each value is maped as an output
value in each pin of the RGB LED, resulting in a specific
mix of colors.

Equipment and wiring:
   Arduino UNO (creating a voltage of 5V)
   Breadboard
   Wires
   3 phototransistors (connected to A0, A1, A2 pins of the Arduino)
   3 10Kohm resistors (each connected in series with each sensor)
   RGB LED (connected to ~9, ~10, ~11, pins of the Arduino)
   3 220ohm resistors (connected in series with each LED pin)

The software is written in C++ and uses OOP principles.