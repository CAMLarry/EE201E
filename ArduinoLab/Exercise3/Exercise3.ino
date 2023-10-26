void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500); // Delay to make output slower.
  if (digitalRead(7) == HIGH) { // if pin 7 is high printing Hello World!
    Serial.print("Hello World!\n");
  } else { // if pin 7 is not high it is low therefore printing It's 2023
    Serial.print("It's 2023\n");
  }
}
