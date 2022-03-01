/* Pushbutton to turn an LED on.

Pressing the pushbutton to turn on an LED in the circuit.
If the pushbutton is pressed, the LED connected to pin 13 in the Arduino board will turn on.
Due to having an ON-OFF state, a Pull down resistor is used to execute this program in order to only produce HIGH or LOW state.

*/

int Pushbutton = 2;  //declaring a variable and assigning it to pin 2 which will be used as digital input.
int LED = 13;  //declaring a variable and assigning pin number 13 as digital output.
int PBstate = 0; //this variable will read the pushbutton when it is HIGH or LOW.

void setup() // configuring the variable as input and output that we declared above.
{ 
pinMode(Pushbutton, INPUT); // set the variable "Pushbutton" as a digital input.
pinMode(LED, OUTPUT);  // set the variable "LED" in the program as an output.

}

void loop() {
  
PBstate = digitalRead(Pushbutton);  // using the digitalRead function to read the status of the Pushbutton, 
//and storing that value to the varaible "PBstate".

if (PBstate == HIGH)  //the IF funtion checks the state of the variable "PBstate" whether it is HIGH or LOW;
//if it is HIGH, the LED will turn on.

{digitalWrite (LED, HIGH);  //LED turns on if the condition in the IF loop is met.
  }
  else {digitalWrite (LED, LOW);  //turns off the LED; the ELSE function executes the code when the IF function is FALSE.
  }
}
