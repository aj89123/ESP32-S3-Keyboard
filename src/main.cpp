#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard keyboard;

void setup() {
  keyboard.begin();
  USB.begin();
}

void loop() {
  delay(1000);
}
