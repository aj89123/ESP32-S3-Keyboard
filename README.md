# ESP32-S3 USB keyboard (no automatic keystrokes)

Target: ESP32-S3 N16R8, external antenna, native USB/OTG port.

## Cloud build from phone
1. Create a new GitHub repository and upload the contents of this folder, including `.github/workflows/build.yml`.
2. Open repository > Actions > Build ESP32-S3 USB Keyboard > Run workflow (or wait for the push build).
3. Download the `esp32-s3-keyboard-firmware` workflow artifact and unzip it on your phone.
4. In ESP32 Flash/Erase select ESP32-S3, 115200 baud and `keyboard_merged.bin`, with offset `0x0`.
5. Connect the phone to the board's USB-to-serial (CH343P) port for flashing; use native USB/OTG port for keyboard operation afterward.

IMPORTANT: This build is untested on the exact board. Review build log and validate image before flashing. Flashing replaces existing ESP32 firmware. Do not flash the car radio with this image. This does not bypass bootloader security or force recovery.
