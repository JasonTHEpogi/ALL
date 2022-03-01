/* FADE control

 Using the PWM pins in the Arduino board to control the brightness of an LED manually.
 The pins with ∼ symbol next to its number can be used as Analog Outputs.
 This means that the LED that is going to be wired to one of those pins will work as an Analog Output.
   
 */
 
int LED = 9;  // declaring a variable for the LED and assigning it to pin 9 in the Arduino UNO. 

void setup()  // configuring the variable "LED" to be an Output in the program.

{
pinMode(LED, OUTPUT);  // set the variable LED as an output.
}

void loop()  // enter the code below to control the brightness of the LED.

{
analogWrite(LED, 150);  // using the analogWrite to control the brightness of the LED in the circuit by altering the analog value.
                    
}
