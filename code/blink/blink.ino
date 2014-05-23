int led = 9;                // LED Pin definieren

void setup() {
  pinMode(led, OUTPUT);     // LED Pin als Ausgang setzen
}

void loop() {

  digitalWrite(led, HIGH);  // LED einschalten

  delay(1000);              // LED 1000 Millisekunden warten

  digitalWrite(led, LOW);   // LED ausschalten

  delay(1000);              // LED 1000 Millisekunden warten
}
