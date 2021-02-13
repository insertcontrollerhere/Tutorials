void setup() {
  Serial.begin(9600); // set the data rate (bits per second) for serial data transmission  ←
}

void loop() {
  Serial.println("Hello World!"); // print the phrase "Hello World!" to the serial monitor  ←
  delay(1000); // wait 1 second (1000 ms) before continuing  ←
}
