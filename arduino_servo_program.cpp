/*
  This program controls 6 servo motors on an Arduino board,
  rotating them in a range from 0 to 180 degrees and back.
  --------------------------------------------------------
  Implemented by Asmaa Shaker 
  This code is in the public domain.
*/

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int pos = 0; // Variable to store servo position

void setup() {
  // Attach each servo to its respective pin
  servo1.attach(3);  
  servo2.attach(5);
  servo3.attach(6); 
  servo4.attach(9);  
  servo5.attach(10); 
  servo6.attach(11);
  }


void loop() {
  // Move servos from 0 degrees to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) 
  {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    delay(50);
  }
    delay(1000);
  // Move servos from 180 degrees to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    delay(50);
  }
    delay(1000);
}
