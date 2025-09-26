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
  //You will need to fix the numbers for best use.
  int arm = 0;
  int claw = 3;
  int even = 1800;
  int tilt = 0; 
  int up = 500;
  int open = 500;
  int close = 2047; 

