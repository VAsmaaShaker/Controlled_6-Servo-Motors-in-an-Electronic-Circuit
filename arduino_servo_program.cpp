/*
  This program controls 6 servo motors on an Arduino board,
  rotating them in a range from 0 to 180 degrees and back.
  -------------------------------------------------------
  Implemented by Asmaa Shaker 
  This code is in the public domain.
*/
#include <Servo.h>
// Variables for analog inputs 
int poter1 = 0, poter2 = 0, poter3 = 0, 
    poter4 = 0, poter5 = 0, poter6 = 0;

// Variables for mapped servo values
int servo1 = 0, servo2 = 0, servo3 = 0,
    servo4 = 0, servo5 = 0, servo6 = 0;

// Define servo objects 
Servo servoPIN3, servoPIN5, servoPIN6, 
servoPIN9, servoPIN10, servoPIN11;

// Define servo pins
const int SERVO_PIN_3 = 3;
const int SERVO_PIN_5 = 5;
const int SERVO_PIN_6 = 6;
const int SERVO_PIN_9 = 9;
const int SERVO_PIN_10 = 10;
const int SERVO_PIN_11 = 11;

void setup()
{// Attach servo to pins with min & max pulse widths
  pinMode(A0, INPUT);
  servoPIN3.attach(SERVO_PIN_3, 500, 2500);
  
  pinMode(A1, INPUT);
  servoPIN5.attach(SERVO_PIN_5, 500, 2500);
  
  pinMode(A2, INPUT);
  servoPIN6.attach(SERVO_PIN_6, 500, 2500);
  
  pinMode(A3, INPUT);
  servoPIN9.attach(SERVO_PIN_9, 500, 2500);
  
  pinMode(A4, INPUT);
  servoPIN10.attach(SERVO_PIN_10, 500, 2500);
  
  pinMode(A5, INPUT);
  servoPIN11.attach(SERVO_PIN_11, 500, 2500);
}

void loop()
{
// Read analog inputs, map to servo angles,write to servos
  poter1 = analogRead(A0);
  servo1 = map(poter1, 0, 1023, 0, 180);
  servoPIN3.write(servo1);
  
  poter2 = analogRead(A1);
  servo2 = map(poter2, 0, 1023, 0, 180);
  servoPIN5.write(servo2);
  
  poter3 = analogRead(A2);
  servo3 = map(poter3, 0, 1023, 0, 180);
  servoPIN6.write(servo3);
  
  poter4 = analogRead(A3);
  servo4 = map(poter4, 0, 1023, 0, 180);
  servoPIN9.write(servo4);
  
  poter5 = analogRead(A4);
  servo5 = map(poter5, 0, 1023, 0, 180);
  servoPIN10.write(servo5);
  
  poter6 = analogRead(A5);
  servo6 = map(poter6, 0, 1023, 0, 180);
  servoPIN11.write(servo6);
  
  delay(10); // Delay for stability
}
