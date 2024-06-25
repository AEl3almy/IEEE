#define redled 2
#define greenled 3 
#define yellowled 4
#define echopin 9 
#define trigpin 10
float distance = 0;
void setup() {
pinMode(echopin, INPUT);
pinMode (trigpin , OUTPUT);
pinMode (greenled , OUTPUT);
pinMode (redled , OUTPUT);
pinMode (yellowled , OUTPUT);
}
void loop() {
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

distance = pulseIn (echopin,HIGH);
distance = distance /58;
if  (distance >= 15){
  digitalWrite (greenled, LOW);
   digitalWrite (redled, LOW);
  digitalWrite (yellowled, LOW);
}
else if (distance > 10 || distance < 15){
    digitalWrite (greenled, HIGH);

}
else if (distance > 5 || distance < 10){
  digitalWrite (yellowled, HIGH);

}else{
     digitalWrite (redled, HIGH);

}
}
