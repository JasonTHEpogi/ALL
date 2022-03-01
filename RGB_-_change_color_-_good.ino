/*RGB color change using potentiometer

Using a potentiometer to change the color of the RGB light emitting diode in the circuit.
The LED will change to either red when the potentiometer value is less than or equal to 250; blue when 
the potentiometer is less than or equal to 650, and green when none of these two conditions is true.
*/

 int red = 9;     // declaring a variable and assigning it to pin 9 for the red LED.
 int blue = 10;   // declaring a variable and assigning it to pin 10 for the blue LED.
 int green = 11;  // declaring a variable and assigning it to pin 11 for the green LED.
 int Potentiometer = A5;  // declaring a variable and assigning it to pin A5 for the potentiometer to be an analog input.
 int PotValue = 0;   // declaring a variable to store the value of the potentiometer.
 
void setup()  // configuring the variable we declared above to be an analog output and input.
{
 pinMode(red, OUTPUT);     // setting the red LED as an output.
 pinMode(blue, OUTPUT);    // setting the blue LED as an output.
 pinMode(green, OUTPUT);   // setting the green LED as an output.
 
 pinMode(Potentiometer, INPUT);  // setting the Potentiometer as an input.
}

void loop()
{
  PotValue = analogRead(Potentiometer);  // the variable "PotValue" reads the value coming from the potentiometer through analogRead.
  
  if (PotValue <= 250)  // the red LED turns on if the condition for the IF statement is true; 
                       // such as if the PotValue is less than or equal to 250, then the LED will turn on. 
  {
    analogWrite(red, 255);  // the red LED turns on.
    analogWrite(blue, 0);   // the blue LED remains OFF while the red is still on.
    analogWrite(green, 0);  // the green LED remains OFF as well.
  }
  else if (PotValue <= 650)  // the ELSE IF statement turns the blue LED on if the condition is true for this statement.
  {
    analogWrite(red, 0);  // the red LED is turned off.
    analogWrite(blue, 255);  // the blue turns on because the ELSE IF statement is true.
    analogWrite(green, 0);  // the green remains OFF since the condition for it to turn on has not yet met.
  }
  else  // the ELSE statement turns the green LED if both conditions for the previous IF's statement is false.
  {
    analogWrite(red, 0);  // the red LED turns off.
    analogWrite(blue, 0);  // the blue LED turns off.
    analogWrite(green, 255);  // the green LED turns ON.
}
}
