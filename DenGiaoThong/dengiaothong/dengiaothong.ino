void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 2;
  for (int i = 1; i < x ; i++) {
    digitalWrite(3, HIGH);
    delay(25000);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(10000);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(30000);
    digitalWrite(5, LOW);
    i = 0;
  }
}
