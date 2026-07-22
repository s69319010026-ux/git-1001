#define LED D1       
#define BUTTON_ON D5 
#define BUTTON_OFF D6

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_ON, INPUT_PULLUP);
  pinMode(BUTTON_OFF, INPUT_PULLUP);
  digitalWrite(LED, LOW);
}
void loop() {
  if (digitalRead(BUTTON_ON) == LOW) {
    digitalWrite(LED, HIGH);
  }
  if (digitalRead(BUTTON_OFF) == LOW) {
    digitalWrite(LED, LOW);
  }
}