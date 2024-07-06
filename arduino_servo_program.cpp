/*
  This program controls 6 servo motors on an Arduino board,
  rotating them in a range from 0 to 180 degrees and back.

  Implemented by Asmaa Shaker < https://www.tinkercad.com/things/5tdEIU10hh7-task1/editel?sharecode=q1qUtlGKqur5pfqyqXcqN4NYqqvdivPk_I9za6OPqyA >
  This code is in the public domain.
*/

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int pos = 0; // variable to store the servo position


void setup() {
  servo1.attach(6);  
  servo2.attach(7);
  servo3.attach(8); 
  servo4.attach(9);  
  servo5.attach(10); 
  servo6.attach(11);  
}

void loop() {
// goes from 0 degrees to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    delay(15);
  }

// goes from 180 degrees to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    delay(15);
  }
}
