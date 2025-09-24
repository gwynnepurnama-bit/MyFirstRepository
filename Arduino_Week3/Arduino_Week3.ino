void setup() {
  // put your setup code here, to run once:
pinMode (6, OUTPUT);
pinMode (8, OUTPUT);
}

void loop() {
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(1000);// put your main code here, to run repeatedly:

}
