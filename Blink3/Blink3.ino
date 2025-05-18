

const int LED1_PIN = 3;
const int LED2_PIN = 7;
const int DELAY_MS = 500;

void setup() {
  pinMode(LED1_PIN,OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
}

void loop() {

  digitalWrite(LED1_PIN,HIGH);
  digitalWrite(LED2_PIN,HIGH);

  delay(DELAY_MS);

  digitalWrite(LED1_PIN,LOW);
  digitalWrite(LED2_PIN,LOW);

  delay(DELAY_MS);
}
