#include "Servo.h" //to use servo motor
Servo motor;
void setup() {
motor.attach(5); // to use pin 5
}

void loop() {
int v = analogRead(A0);// to read the change in pot.
float angle = v*180.0/1023;// to calculate the angle 
motor.write(angle); // to read the angle and make servo move to it
delay (100);
}
