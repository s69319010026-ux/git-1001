#define LED1 D1
#define LED2 D2
#define LED3 D5
#define BUTTON D6
int state = 0;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}
void loop() {
  if (digitalRead(BUTTON) == LOW) {
    state++;
    if (state > 2) {
      state = 0;
    }
    if (state == 0) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
    }
    else if (state == 1) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
    }
    else if (state == 2) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
    }
    while (digitalRead(BUTTON) == LOW) {
      delay(10);
    }
    delay(50);
  }
}