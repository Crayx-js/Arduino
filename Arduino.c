
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}