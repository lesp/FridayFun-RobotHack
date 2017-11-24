/*
Motor1
Forward is 5 High, 9 Low.
Backward is 9 High, 5 Low
Stop is 5 Low, 9 Low

Motor 2
Left is 6 High, 10 Low delay(20)
Right is 6 Low, 10 High delay(20)
Centre is correct the steering in the opposite direction but only for 10ms
 */

// the setup function runs once when you press reset or power the board
void setup() {
// Initialise motors as outputs
  //Motor 1
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  //Motor 2
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);
  digitalWrite(9,LOW);
  delay(3000);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(20);
  digitalWrite(6, LOW);
  digitalWrite(10, HIGH);
  delay(20);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(5, LOW);
  delay(3000);
  digitalWrite(6, HIGH);
  digitalWrite(10, LOW);
  delay(10);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
}
