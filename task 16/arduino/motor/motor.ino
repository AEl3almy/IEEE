int ledpin = 3;
String msg ; 
void setup() {
pinMode(ledpin,OUTPUT);
Serial.begin(9600);

}

void loop() {
Serial.println("enter On or Off");
while (Serial.available() == 0){ // to make the loop wait for the user enter the string
  
}
msg = Serial.readString();
if (msg == "on"){
  digitalWrite(ledpin , HIGH);
}
if (msg == "off"){
  digitalWrite(ledpin , LOW);
}
Serial.println("\n");

}
