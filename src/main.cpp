

#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard keyboard;

void setup() {
  keyboard.begin();
  USB.begin();
}

void loop() {
  delay(10000);
  keyboard.print("ESP32 TEST");
  while (true) {
    delay(1000);
  }
}
