#include <Servo.h>
Servo servoFrontLeft; // Define our Servo
Servo servoFrontRight; // Define our Servo

void setup()
{
   servoFrontLeft.attach(10); // servo on digital pin 10
   servoFrontRight.attach(5); // servo on digital pin 5
}

void loop()
{
   servoFrontLeft.write(180);  // Turn Servo Left to 45 degrees
   servoFrontRight.write(180);  // Turn Servo Left to 45 degrees
   delay(1000);          // Wait 1 second
   servoFrontRight.write(0);   // Turn Servo Left to 0 degrees
   servoFrontLeft.write(0);   // Turn Servo Left to 0 degrees
   delay(1000);          // Wait 1 second

}

