/* Light Chaser

This program is to show how to make 3 LEDs turn on and off alternately.

Functionality:
One LED turns On until the delay we set has elapsed while the other two remain OFF.
Once the previous LED has turned off, the next LED turns On until 500 milliseconds has expired.
The same patern is repeated making the 3 LEDs as if they're chasing each other.

*/

int LED1 = 10;  // declaring a variable and assigning it to pin 10 in the arduino board.
int LED2 = 11;  // declaring another variable and assigning it to pin 11 to use as a digital output.
int LED3 = 12;  // declaring another variable and assigning a pin number which will be a digital output.

void setup()  // setting up the code to run once.
{ //
// declaring and configuring the variables we declared above as digital outputs in the program.
  pinMode(LED1, OUTPUT);  // make LED1 as an output; use pin 10 in the arduino board since 10 is declared above. 
  pinMode(LED2, OUTPUT);  // make LED2 as an output; use pin 11 in the arduino board.
  pinMode(LED3, OUTPUT);  // make LED3 as an output; use pin 12 in the arduino board.
}

void loop()  // the codes entered below will run repeateadly.
{
  digitalWrite(LED1, HIGH);  // when LED1 is set to HIGH, turn on LED1.
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED1, LOW);  //turn off LED1 once the delay has elapsed.
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED2, HIGH);  //when LED2 is HIGH, turn on LED2.
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED2, LOW);  //after 500millisecond, turn it off.
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED3, HIGH);  //when LED3 is HIGH, turn it on.
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED3, LOW);  //wait until the delay expires before looping back.
  delay(500); // Wait for 500 millisecond(s)
}
