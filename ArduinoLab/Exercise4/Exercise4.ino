  // Carter Maloney
  // Lab3 exercise 4
  
  
  int pina = 2; // Setting pin values for easy use
  int pinb = 3;
  int pinc = 5;
  int pind = 6;
  int pine = 8;
  int pinf = 10;
  int ping = 11;

void setup() {
  // put your setup code here, to run once:

  pinMode(pina, OUTPUT); // Setting output pins
  pinMode(pinb, OUTPUT);
  pinMode(pinc, OUTPUT);
  pinMode(pind, OUTPUT);
  pinMode(pine, OUTPUT);
  pinMode(pinf, OUTPUT);
  pinMode(ping, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ping, LOW); // display 9
  digitalWrite(pine, HIGH);
  delay(1500); // 1.5 second delay
  digitalWrite(pine, LOW); // display 8
  delay(1500);
  digitalWrite(pind, HIGH); // display 7
  digitalWrite(pine, HIGH);
  digitalWrite(pinf, HIGH);
  digitalWrite(ping, HIGH);
  delay(1500);
  digitalWrite(pinb, HIGH); //display 6
  digitalWrite(pind, LOW);
  digitalWrite(pine, LOW);
  digitalWrite(pinf, LOW);
  digitalWrite(ping, LOW);
  delay(1500);
  digitalWrite(pine, HIGH); // display 5
  delay(1500);
  digitalWrite(pina, HIGH); // display 4
  digitalWrite(pinb, LOW);
  digitalWrite(pind, HIGH);
  delay(1500);
  digitalWrite(pina, LOW); // display 3
  digitalWrite(pind, LOW);
  digitalWrite(pinf, HIGH);
  delay(1500);
  digitalWrite(pinc, HIGH); // display 2
  digitalWrite(pine, LOW);
  delay(1500);
  digitalWrite(pina, HIGH); // display 1
  digitalWrite(pinc, LOW);
  digitalWrite(pind, HIGH);
  digitalWrite(pine, HIGH);
  digitalWrite(ping, HIGH);
  delay(1500);
  digitalWrite(pina, LOW); // display 0
  digitalWrite(pind, LOW);
  digitalWrite(pine, LOW);
  digitalWrite(pinf, LOW);
  delay(1500);
}

