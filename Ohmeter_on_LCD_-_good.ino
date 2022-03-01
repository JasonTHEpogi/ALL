/* Ohmeter on LCD screen

The Arduino can be programmed as an Ohmeter; so this program is to show how to take the unknown resistance
and display it on the LCD screen. 
By using the voltage divider rule, this allows us to determine the unknown value of R2; 
given one known resistor(R1) with 1k ohms resistance as the reference to find the value of R2.

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float R1 = 1000.0;  // declaring the value of resistor 1 (R1)to use as a reference; we are using float as data type to store decimal values.
float R2 = 0.0;  // declaring R2 as float; the data type must be float to store decimal value.
float Vin = 5.00;  // declaring the input voltage(Vin) with 5V since Arduino can only supply 5V. 
float Vout = 0.0;  //declaring a variable for output voltage; keeping the data type the same as the others to store decimal value.
float Avalue = 0.0;  //declaring a variable called "Avalue" to store the reading of A5 pin.
int Apin = A5;  // declaring pin A5 to read the incoming analog value.

// to create a custom character
byte customChar[8] = { //creating and displaying the Ohm symbol on the LCD screen. 
                       //the following combination of codes below generate the ohm symbol.
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011,
  B00000
};


void setup() {
lcd.begin(16, 2);  // configuring the LCD to display 16 character in columns and to enable 2 rows
Serial.begin(9600);  // establishing a serial communication at 9600 baudrate.
  
int Avalue = analogRead(Apin);  // the variable "Avalue" reads the value of the analog input "Apin" through analogRead.

Vout = Avalue * (Vin / 1023);  // convert the analog reading from the variable "Avalue" to a voltage by multipliying the
                               // analog reading to the input voltage(5V) and dividing them by the maximum analog value(1023).
                               
R2 = R1 * (1 / ((Vin/Vout) - 1));  // Using the known resistance as well as the input and output voltages to find 
                                   // the unknown resistance of R2.
                                   
lcd.print("Resistor value");   // printing "Resistor value" on the LCD screen.
 lcd.setCursor(0,1);           // set the cursor position to bottom left of the screen;(column = 0 & row = 1).
  lcd.print("R2: ");           // printing "R2: " on the bottom row of the LCD.
   lcd.print (R2);             // printing the value of R2 on the LCD screen.
  
lcd.write(byte(0));  //important to use Byte as the data type to avoid compiling error.
 lcd.createChar(0, customChar);  // to create and display the character on the LCD.
}

void loop() {
}
 
