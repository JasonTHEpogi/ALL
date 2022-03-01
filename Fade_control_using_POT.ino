/* Fade an LED using a potentiometer
 
 Using a potentiometer to control the birghtness of an LED in the circuit. 
 The potentiometer is connected to the analog pin(A5)in the Arduino Uno in order to control the LED's brightness.
 The map function will be used to convert the analog input value to set the analog output to the desired 
 brightness of the LED in the circuit.
 The LED is attached to one of the the PWM pin(D3)in the Arduino UNO since it will need to work as an analog output.
 */

int Potentiometer = A5;    // Declaring a variable and assigning it to pin A5, an analog input for the potentiometer.
int LED = 3;      // declaring a variable and selecting pin 3 for this variable; the LED will be connected to pin 3.
int PotValue = 0;  // declaring variable to store the value that is obtained from the Potentiometer.

void setup()   // configuring the potentiometer as an analog input and the LED as an analog output.
{
  pinMode(Potentiometer, INPUT);  // set the potentiometer as an input.
  pinMode(LED, OUTPUT);  // set the LED as an output.
}

void loop() 
{
PotValue = analogRead(Potentiometer);  // using the analogRead to read the value coming from the potentiometer 
//and store it to the variable "PotValue" that we declared above.

PotValue = map(PotValue , 0, 1023, 0, 255);  // the map function is used to scale the value stored in the "PotValue",
//and converts it to the desired value for the analog output to control the brightness of the LED. 
  
analogWrite(LED, PotValue );  // turning the LED on and controlling the brightness of it based on the Potentiometer's value.
}
