/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\22-ZHauck                                        */
/*    Created:      Wed Nov 20 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// rightmotor_front     motor         3               
// leftmotor_front      motor         2               
// rightmotor_back      motor         1               
// lift_motor           motor         10              
// leftmotor_back       motor         4               
// claw_motor           motor         13              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "iostream"

using namespace vex;
using namespace std;

int main() {
  while(true){
    //MOVEMENT CONTROLS
    if(Controller1.ButtonUp.pressing()){
      cout << "Moving Forward";
    }
    if(Controller1.ButtonDown.pressing()){
      cout << "Backing Up";
    }
    if(Controller1.ButtonRight.pressing()){
      cout << "Turning Right";
    }
    if(Controller1.ButtonLeft.pressing()){
      cout << "Turning Left";
    }
    //TEMPERATURE READINGS
    Brain.Screen.print("Right Front Motor: " + std::string to_string(rightmotor_front.temperature()));
    sleep(5000);
    Brain.Screen.print("Right Back Motor: " + std::string to_string(rightmotor_back.temperature()));
    sleep(5000);
    Brain.Screen.print("Right Front Motor: " + std::string to_string(leftmotor_front.temperature()));
    sleep(5000);
    Brain.Screen.print("Right Front Motor: " + std::string to_string(leftmotor_back.temperature()));
    sleep(5000);
  }

}