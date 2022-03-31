
void textAusgabe1(void);

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
}

void textAusgabe1(void)
{
  Serial.println("Auf die Plätze");

  delay(1000);
}
