/* Pressing pushbutton to turn on the green LED while the red LED is blinking at the same time.
  
 This program will demonstrate how to accomplish two tasks without running into any problem using the NONE-DELAY method.
 The red LED in the circuit will be blinking all the time without getting interupted by the pushbutton 
 that also programmed to turn on the green LED any time.
 Unlike using the DELAY function, the NONE-DELAY (millis) can operate multiple program at the same time without occuring
 any error.

*/

int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an "int" to store
unsigned long previousMillis = 0;        // will store last time LED was updated.

// constants won't change:
const long interval = 1000;  // interval at which to blink (milliseconds)

int Pushbutton = 2;  // declaring pushbutton and assigning it to pin 2.
int GREEN = 12;  // assigning GREEN LED to pin 12 as an digital output.
int RED = 10;  // assigning RED LED to pin 10 as an digital output.
int PBstate = 0;  // declaring a variable to be used to store the value of pushbutton in the program.

void setup() // declaring the variable to be an input and outputs.
{
  // set the digital pin as input & output :
  pinMode(Pushbutton, INPUT);  // make the Pushbutton as an inpout.
  pinMode(GREEN, OUTPUT);  // make the GREEN LED as an output.
  pinMode(RED, OUTPUT);  // make the RED LED as an output.
}

void loop() // to run the code repeteadly, enter them here:
 {
  unsigned long currentMillis = millis();  // the millis function only starts counting when the Arduino has powered up.

  if (currentMillis - previousMillis >= interval)  // the "currentMillis" substracts the time at which the red LED has blinked previously to the "previousMillis"
                                                   // and comapres that value to the "interval" if it is greater than or equal.
                                                   // the IF statement will execute the code below if the condition is TRUE.
  {
    previousMillis = currentMillis;  // saving the last time the LED has blinked.

    if (ledState == LOW)   // the IF statement here is to toggle the red LED to HIGH if the LED in the program is LOW. 
    {
      ledState = HIGH;  // set the ledState to HIGH if the previous condition of the IF statement is TRUE.
    } 
    else  // the ELSE statement toggle the ledState to LOW if the IF statement is FALSE.
    {
      ledState = LOW;  // ledState is LOW.
    }

    digitalWrite(RED, ledState);  // turn on or off the LED based on the ledState when it is toggled.
  }

// Using the Pushbutton to make the green LED on or off:
  PBstate = digitalRead(Pushbutton);  // reading the value from the pushbutton.
  
  if (PBstate == HIGH) // the IF statement when it is TRUE executes the code which turns on the green LED in the circuit.
  {
    digitalWrite(GREEN, HIGH);  // the green LED turns on if the IF statement is TRUE.
  }
  
  else   // the ELSE statement turns the green LED off if the condition is the IF statement is FALSE.
  {
  digitalWrite(GREEN, LOW);  // green LED turns off.
  }

}
