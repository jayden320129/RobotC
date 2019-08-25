int leftMotor; //leftMotor on port1
int rightMotor; //rightMotor on port6

void startMotor(int speedRight, int speedLeft) {
  leftMotor = speedLeft;
  rightMotor = speedRight;
}

void distanceSensor(int distance) {};

void lightSensor(float light_level) {};

//all controller values are 0 or 1 (true or false)
//int bools[10] each value corresponds to something the controller has ? 
void radio(int joystick_right, int joystick_left, int bumper_right, int bumper_left, int trigger_right, int trigger_left, int e1, int e2, int f1, int f2) {
  //put the different possible control values into functions of probability and run through them until a condition is true (while loop)
}


void poinTurnRight() {}
void pointTurnLeft() {}
void swingTurnRight() {}
void swingTurnleft() {}

//probability functions
void randomBool(int one, int zero) {
  int bool_one = one;
  int bool_two = zero;
  //add condition(s) 
}



int main(void) {
  float values[4];
  //change to probability functions 
  values[0] = 127.0; //127 = full power 
  values[1] = 127.0; 
  values[2] = 30.5; //300 is bright, 0 is complete darkness
  values[3] = 20.0; //measured in meters 

  //motors start on full speed
  startMotor(values[0], values[1]); 
  lightSensor(values[2]); //dim light
  distanceSensor(values[3]); //distance in meters 

  float controller_values[10];
}

