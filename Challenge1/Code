#include <stdio.h>
#include <kipr/wombat.h>

//Servo, and motor commands.
//define is a protocal that defines what X is and replaces it with Y when compiling
#define LM 0 //LEFT MOTOR
#define RM 3 //RIGHT MOTOR
#define M motor //MOTOR
#define P msleep //MSLEEP
#define SERVON enable_servos (); //ENABLE_SERVOS
#define SERVOFF disable_servos(); //DISABLE_SERVOS
#define SSP set_servo_position //SET_SERVO_POSITION
#define PAUSE5 motor(0,0); motor(3,0); msleep(5000); //SLEEP FOR 5 SECONDS
#define PAUSE1 motor(0,0); motor(3,0); msleep(1000); //SLEEP FOR 1 SECOND
#define CLAP SERVON SSP(3,2400); PAUSE1 SSP(3,2000); PAUSE1 SSP(3,2400); PAUSE1 SSP(3,2000); PAUSE1 SERVOFF


int main()
{
  //int is like define but only reads when called versues when compiling
  //Calling a function involves using its name, often followed by parentheses () which may contain arguments (values passed to the function).
  int arm = 0;
  int claw = 3;
  int even = 1800;
  int tilt = 0; 
  int up = 500;
  int open = 500;
  int close = 2047; 

SERVON //servos turn on
SSP(arm,even); // servo arm is slected and set to be even
SSP(claw,open); // servo claw is slected and set to open
PAUSE1 // robot pauses for 1 second

while(analog(0)<=3050) //robot is reading that while the rangefinder is less then or equal to 2800 set action will hapen
{
 M(LM,50); //action is defined as motor(0,50) aka left motor is going forward
 M(RM,50); //action is defined as motor(3,50) aka right motor is going forward
}

PAUSE1 // robot pauses for 1 second

while(analog(0)>=1670) //robot is reading that while the rangefinder is greater then or equal to 1670 set action will hapen
{
  M(LM,-100); //action is defined as motor(3,-100) aka left motor is going backwards
  M(RM,-100); //action is defined as motor(3,-100) aka right motor is going backwards
}

PAUSE1 // robot pauses for 1 second

SSP(arm,up); // servo arm is slected and set to be up
SSP(claw,close); // servo claw is slected and set to close
PAUSE1 // robot pauses for 1 second
CLAP //celabration
PAUSE5 // robot pauses for 5 seconds
SERVOFF //servos turn off

  return 0;
}
