#include <Keyboard.h>  // Include the required libraries for this project
#include <HID_Buttons.h>

const uint8_t ButtonPinW = 4; // Assigns buttons to pins on the Arduino board
const uint8_t ButtonPinS = 5;
const uint8_t ButtonPinA = 6;
const uint8_t ButtonPinD = 7;

const uint8_t KeyW = 'w'; // Assigns keyboard keys to buttons
const uint8_t KeyS = 's';
const uint8_t KeyA = 'a';
const uint8_t KeyD = 'd';

KeyboardButton ButtonW(KeyW); // Creates a relationship between buttons and keyboard keys
KeyboardButton ButtonS(KeyS);
KeyboardButton ButtonA(KeyA);
KeyboardButton ButtonD(KeyD);

void setup() {
  pinMode(ButtonPinW, INPUT_PULLUP);  // Sets Arduino button pins as inputs
  pinMode(ButtonPinS, INPUT_PULLUP);
  pinMode(ButtonPinA, INPUT_PULLUP);
  pinMode(ButtonPinD, INPUT_PULLUP);

  Keyboard.begin(); // Causes the Arduino to emulate a keyboard for the connected computer
}

void loop() {
  boolean pressed = !digitalRead(ButtonPinW); // Checks if buttons are pressed or released
  boolean pressed = !digitalRead(ButtonPinS);
  boolean pressed = !digitalRead(ButtonPinA);
  boolean pressed = !digitalRead(ButtonPinD);
  
  ButtonW.set(pressed); // If a button was pressed or released, send the corresponding keystroke to the computer
  ButtonS.set(pressed);
  ButtonA.set(pressed);
  ButtonD.set(pressed);
}
