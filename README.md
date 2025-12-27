Low key thought of this for this year's science fair project, but decided to go with the other one on the profile instead. Nonetheless, type one diabetes is still a case that has been discussed, yet lacks basic integral technological advancements. Patients suffer the pain of punctures to receive the insulin needed to regulate their blood glucose levels. With this code, a simulation for an artificial pancreas can be thought of, and potentially used.

### If anyone would like to replicate this, and actually execute the project, be my guest. I took inspiration from science buddies for their potential solution for a model that will help with this ordeal, yet the code is strictly original and one that I have thought of. Feel free to tweak it however you what at any given point.

Conductivity Sensor
take a prism of styrofoam (preferably of lengths 2' x 4" x 2") and two strips of aluminum foil (any length as long as it can wrap around the foam prism once, and still have some left over, with a width of 1-2 centimeters)
wrap two strips around opposite ends of one prism, and leave the excess foil folded in a way that alligator clips can attach to once inputted

Main Breadboard
connect 5v peristaltic pump to the breadboard [ red wire should be at P(+)1R and black wire should be at J6R { make sure that the peristaltic pump isn't attached to the motor before securing it into the breadboard } ]
 connect the MOSFET (main conductor of power throughout the breadboard) [ one tab should be on F5, one on F6, and one on F7 ]
 connect the 100kΩ resistor [ one end on H16 and the other on H20 ]
 connect the conductivity sensor via alligator clips [ red alligator clip input should be on J20, and the black alligator clip input should be on I25 { make sure that the censor has yet to make contact with water, otherwise the risk of possible electric shock is inevitable } ]
 
Connecting the Arduino into the Breadboard [form the central circuit]
to connect, take three jump wires (male-male pv5) and plug them into the following
A red jump wire should have one end plugged into the 5V port on the Arduino R4 Minima, and the other in P1TL(left-positive) of the breadboard
A black jump wire should have one end plugged into the GND below 5V port on the Arduino R4 Minima, and the other on N1TL(left-negative) of the breadboard 
An orange jumpwire should have one end plugged into the A0 (analogread) of the Arduino R4 Minima, and the other in F19 on the breadboard 
A green jumpwire should have one end plugged into Ground 11 of the Arduino R4 Minima, and the other in G7 of the breadboard
Writing the algorithm that will be used for the main function of the pump
Since the main factor into gathering data for the artificial pancreas is the pump i.e. it pumping in the tap water into the distilled water, an algorithm using C++ interface will be written to help the pump understand when to pump the tap water into the distilled water, and when to stop pumping the tap water once a certain threshold of input values of conductivity is met

The algorithm should be written in the software platform of Arduino IDE, since it offers multiple resources, such as multiple boards to upload the algorithm (was written) onto, and a serial monitor in cases having to collect numerous strings of data
The serial monitor will be used to help display all data being presented during the testing of the prototype, which will later be analysed.

