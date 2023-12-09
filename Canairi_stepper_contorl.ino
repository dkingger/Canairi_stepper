#include <Stepper.h>

const int stepsPerRevolution = 160;

Stepper myStepper(stepsPerRevolution, 2, 3, 4, 5);

void setup() {
  myStepper.setSpeed(20);
}

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(10);
}

