const int buttonPin = 4;    // 버튼은 GPIO 4번
const int ledPin = 2;       // LED는 GPIO 2번 (내장)

int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
    // default: on
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // 버튼 누르면 LED 켜짐
  } else {
    digitalWrite(ledPin, LOW);  // 떼면 꺼짐
  }
}