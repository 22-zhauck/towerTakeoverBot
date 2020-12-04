using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor rightmotor_front;
extern motor leftmotor_front;
extern motor rightmotor_back;
extern motor lift_motor;
extern motor leftmotor_back;
extern motor claw_motor;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );