#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define maxChar 20
#define maxLine 4
#define adress 0x27

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(adress, maxChar, maxLine);

String IP = "192.168.0.10"; 

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();

  lcd.printCenter(0, "Embedded Webserver"); 
  lcd.printCenter(2, "IP: " + IP); 
}

void loop()
{
	// Do nothing here...
}