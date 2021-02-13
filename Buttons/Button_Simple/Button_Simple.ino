#include <Keyboard.h>  // Use the default keyboard libary included with Arduino  ←

int ButtonPin = 4; // The button is assigned to pin 4 on the Arduino  ←
int Key = 'w'; // Assign the keystroke "w"  ←

void setup() {
pinMode(ButtonPin, INPUT_PULLUP); // Set pin 3 to be in input  ←
Keyboard.begin(); // Tell the Arduino to start emulating a keyboard  ←
}

void loop() {
  int ButtonRead = digitalRead(buttonPin); // Read the current state of the button  ←

  if (ButtonRead == 0) { // If the button is pressed, press the "w" key on the computer  ←
    Keyboard.press(Key);
  }

  else { //If the button is not pressed, release the "w" key on the computer  ←
    Keyboard.release(Key);  
  }
}
