#include <Keyboard.h>

int ButtonPin = 4;
int Key = 'w';

boolean ButtonState = false; // This variable stores the previous state of the button: on or off  ←

void setup() {
  pinMode(ButtonPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int ButtonRead = digitalRead(buttonPin);

  if (ButtonRead == 0) {
    if (ButtonState == false) { // Now if the button is pressed, check if it was not pressed before  ←
      Keyboard.press(Key);
      ButtonState = true; // Update the state of the button to pressed  ←
    }
  }

  else {
    if (ButtonState == true) { // Now if the button is not pressed, check if it was pressed before  ←
      Keyboard.press(Key);
      ButtonState = true; // Update the state of the button to released  ←
    }
  }
}
