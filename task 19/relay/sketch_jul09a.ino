int relayPin = 2;  
int buttonPin = 3;  
int lcdRS = 12;  
int lcdEN = 11;  
int lcdD4 = 5; 
int lcdD5 = 4;  
int lcdD6 = 6;  
int lcdD7 = 7;  

#include <LiquidCrystal.h>

LiquidCrystal lcd(lcdRS, lcdEN, lcdD4, lcdD5, lcdD6, lcdD7);

void setup() {
  pinMode(relayPin, OUTPUT);
  
  pinMode(buttonPin, INPUT);
  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Relay Status:");
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    digitalWrite(relayPin, !digitalRead(relayPin));
    delay(50); 
  }
  
  if (digitalRead(relayPin) == HIGH) {
    lcd.setCursor(0, 1);
    lcd.print("ON");
  } else {
    lcd.setCursor(0, 1);
    lcd.print("OFF");
  }
  delay(100); 
}
