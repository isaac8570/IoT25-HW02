const int buttonPin = 4;    // button
const int ledPin = 2;       // LED

int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // led on
  } else {
    digitalWrite(ledPin, LOW);  // led off
  }
}