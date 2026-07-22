#define LED1 D1
#define LED2 D2
#define BUTTON D5
bool ledState = false;
bool lastButtonState = HIGH;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}
void loop() {
  bool buttonState = digitalRead(BUTTON);
  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;
    digitalWrite(LED1, ledState);
    digitalWrite(LED2, ledState);
    delay(200);
  }
  lastButtonState = buttonState;
}