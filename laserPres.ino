const int buttonPin = 9;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int laser  = 8;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(laser, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println("OFF");
        digitalWrite(laser, LOW);

  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    Serial.println("ON - PRESSED");
        digitalWrite(laser, HIGH);

  }
}
