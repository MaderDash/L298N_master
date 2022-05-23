// This is written by SNV-008
// You can visit my Github library page of this library page by :- https://github.com/SNV-008/L298N_master
//Pls support me

#include <L298N.h>  // initializes the library and includes it


L298N l298n(6, 7, 8, 9, 10, 11);  //to write ena, in1, in2, in3, in4, enb respectively.


void setup() {
  Serial.begin(9600);            // beginning the Serial communication at the baud rate of 9600
}

void loop() {
  // speed will be the varable that is from 0-255 in speed of the motor.
  uint8_t speedValue; 
  // first motor goes forward
  l298n.motor1_forward();
  for (speedValue = 255; speedValue != 0; speedValue--) {
    l298n.SetSpeed(speedValue);
    delay(10);
  }
  // 1 sec delay
  delay(1000);
  //Stop Motor.
  l298n.motor1_stop();
  // 1 sec delay
  delay(1000);
  // first motor goes again backward
  l298n.motor1_backward();
  for (speedValue = 255; speedValue != 0; speedValue--) {
    l298n.SetSpeed(speedValue);
    delay(10);
  }
  // 1 sec delay
  delay(1000);

  //Stop Motor.
  l298n.motor1_stop();

  // 1 sec delay
  delay(1000);
  // second motor goes forward
  l298n.motor2_forward();
  for (speedValue = 255; speedValue != 0; speedValue--) {
    l298n.SetSpeed(speedValue);
    delay(10);
  }
  delay(1000);  // 1sec delay

  l298n.motor2_stop();
  // 1 sec delay
  delay(1000);

  // second motor goes backward
  l298n.motor2_backward();
  for (speedValue = 255; speedValue != 0; speedValue--) {
    l298n.SetSpeed(speedValue);
    delay(10);
  }
  // 1 sec delay
  delay(1000);
  //Stop Motor two.
  l298n.motor2_stop();
  // 1 sec delay.
  delay(1000);
}