int led = 8;
char comando;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    comando = Serial.read();

    if (comando == '1') {
      digitalWrite(led, HIGH);
    }
    if (comando == '2') {
      digitalWrite(led, LOW);
    }
  }
}
