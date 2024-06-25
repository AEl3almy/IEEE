#define PIRsensor 2
#define led 7
#define buzz 6
void setup() {
pinMode(PIRsensor , INPUT);
pinMode (led , OUTPUT);
pinMode (buzz , OUTPUT);
}
void loop() {
int value = digitalRead(PIRsensor);
if (value ==1){
  digitalWrite (led , HIGH);
  digitalWrite (buzz , HIGH);

}else {
    digitalWrite (led , LOW);
    digitalWrite (buzz , LOW);

}
}
