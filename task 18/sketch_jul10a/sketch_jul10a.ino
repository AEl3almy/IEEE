const int IN1 = 2;
const int IN2 = 4;
const int IN3 = 7;
const int IN4 = 8;
const int ENA = 3;
const int ENB = 5;
const int Lsensor = A1;
const int Rsensor = A0;
const int modeSwitch = 6; // Switch to select between Line Follower and Remote Control modes
const int rxForward = 9; // Receiver output pin for forward signal
const int rxBackward = 10; // Receiver output pin for backward signal
const int rxLeft = 11; // Receiver output pin for left signal
const int rxRight = 12; // Receiver output pin for right signal

int RIGHT, LEFT;
int x = 70; // Speed value for Line Follower mode
int y = 80;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(Lsensor, INPUT);
  pinMode(Rsensor, INPUT);
  pinMode(modeSwitch, INPUT);
  pinMode(rxForward, INPUT);
  pinMode(rxBackward, INPUT);
  pinMode(rxLeft, INPUT);
  pinMode(rxRight, INPUT);
}

void loop() {
  int mode = digitalRead(modeSwitch);
  if (mode == HIGH) { // Remote Control mode
    int forward = digitalRead(rxForward);
    int backward = digitalRead(rxBackward);
    int left = digitalRead(rxLeft);
    int right = digitalRead(rxRight);
    
    if (forward == HIGH) {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      Serial.println("Forward");
    } else if (backward == HIGH) {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      Serial.println("Backward");
    } else if (left == HIGH) {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      Serial.println("Left");
    } else if (right == HIGH) {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      analogWrite(ENA, 255);
      analogWrite(ENB, 255);
      Serial.println("Right");
    } else {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      analogWrite(ENA, 0);
      analogWrite(ENB, 0);
      Serial.println("Stop");
    }
  } else { // Line Follower mode
    RIGHT = digitalRead(Rsensor);
    LEFT = digitalRead(Lsensor);
    
    if (RIGHT == 0 && LEFT == 0) {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      analogWrite(ENA, x);
      analogWrite(ENB, y);
      Serial.println("Forward");
    } else if (RIGHT == 0 && LEFT == 1) {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      analogWrite(ENA, x);
      analogWrite(ENB, y);
      Serial.println("Left");
    } else if (RIGHT == 1 && LEFT == 0) {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      analogWrite(ENA, x);
      analogWrite(ENB, y);
      Serial.println("Right");
    }
  }
}
