/* Blinking LED

This program is to blink an LED every 500 millisecond.
The LED is connected to pin 12 in the arduino board which works as a digital output.  

*/

int LED = 12;  // declaring a variable; LED is the name given to the variable; 12 as the assigned pin number. 

void setup()  // any code entered in this section will only run once.
{
  pinMode(LED, OUTPUT);  // configuring and setting the variable declared above as a digital output.
}

void loop()  // this section allows any code to be executed repeatedly.
{
  digitalWrite(LED, HIGH);   // turn on LED when it is HIGH.
  delay(500);  // Wait for 500 millisecond(s) before turning the LED off.
  digitalWrite(LED, LOW);  // turn off LED when it is LOW.
  delay(500); // Wait for 500 millisecond(s) before looping back.
}
