
void textAusgabe1(void);
void textAusgabe2(void);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115000);

  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Hello World!");

  delay(2000);

  textAusgabe1();

  textAusgabe2();
}

void textAusgabe1(void)
{
  Serial.println("Auf die Plätze");

  delay(5000);
}

void textAusgabe2(void)
{
  Serial.println("fertig los!");

  delay(2000);
}
