# BlinkLibrary
This library toggles a pin.

Steps for library installation for ArduinoIDE:
1. Download the zip library and open it
2. Close the arduino IDE if opened
3. Navigate to BlinkLibrary/ArduinoIDE
3. Move the 'Blink' directory into the arduino IDE libraries folder
4. Open arduino IDE
5. Go to Sketch>Include Library
6. Scroll down and under 'User Contributed', you should see 'Blink'.
7. Click to add it to your sketch

Steps for library installation for PlatformIO:
1. Download the zip library and open it
2. Navigate to Blink/Library/PlatformIO
3. Move the 'Blink' directory to the 'src' of your PIO project
4. At the top of your code after '#include <Arduino.h>', add '#include <Blink.h>' in the next line. The library is now added to your sketch

Note: In PIO, you have an option to use the functions by themselves or as methods. But in ArduinoIDE, you have to use them as methods.
