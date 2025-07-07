void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Turing on
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
  delay(10);
}