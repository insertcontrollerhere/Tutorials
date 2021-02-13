#include <Keyboard.h>
#include <HID_Buttons.h>  // Include the HID library - the keyboard.h library MUST be included first!  ←

const uint8_t ButtonPin = 4;
const uint8_t Key = 'w';

KeyboardButton myButton(Key); // Use the KeyboardButton function from the library to assign the "w" key  ←

void setup() {
  pinMode(ButtonPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  boolean pressed = !digitalRead(ButtonPin); 
  myButton.set(pressed); // Send the corresponding keystroke action based on the button state with a single line of code  ←
}
