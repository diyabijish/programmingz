/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Diya                                                     */
/*    Created:      Dec8-2023                                                 */
/*    Description:  V5 project   
/*    Notes:        far side auton- got one triabll in goal and one triball in two-point zone(total 7 ponts)*/
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

competition Competition; 

brain  Brain;

controller Controller1 = controller(primary);

motor leftMotorA = motor(PORT3, ratio6_1, true);
motor leftMotorB = motor(PORT2, ratio6_1, true);
motor leftMotorC = motor(PORT1, ratio6_1, true); 
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB, leftMotorC);
motor rightMotorA = motor(PORT10, ratio6_1, false);
motor rightMotorB = motor(PORT9, ratio6_1, false);
motor rightMotorC = motor(PORT8, ratio6_1, false); 
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB, rightMotorC);
inertial Inertial = inertial(PORT5);
//drivetrain Drive(LeftDriveSmart, RightDriveSmart, 10.21, 12.0, 12.125, inches, 0.6);
smartdrive Drive(LeftDriveSmart, RightDriveSmart, Inertial, 10.21, 12.0, 12.125, inches, 0.6);

digital_out dig1 = digital_out(Brain.ThreeWirePort.A);
digital_out dig2 = digital_out(Brain.ThreeWirePort.B);
digital_out dig3 = digital_out(Brain.ThreeWirePort.H);
digital_out dig4 = digital_out(Brain.ThreeWirePort.G);

motor CatapultMotor = motor(PORT6, ratio36_1, true);
motor IntakeMotor = motor(PORT7, ratio6_1, true);



void pre_auton(void) {
    // Initializing Robot Configuration. DO NOT REMOVE!
    vexcodeInit();
    Drive.setDriveVelocity(100, percent);
    CatapultMotor.setVelocity(100, percent);
    // All activities that occur before the competition starts
    // Example: clearing encoders, setting servo positions, ...
}

void autonomous() {
 Drive.setDriveVelocity(100, percent);
 const int intakeVelocity = 600; 
 const int actionDuration = 900; // about 1 second (milliseconds)

 Drive.driveFor(reverse, 13.0, inches);
 Drive.turnToHeading(70, degrees, 200, rpm);
 CatapultMotor.spin(vex::directionType::rev, 11, vex::voltageUnits::volt);
 vex::task::sleep(31000);
 CatapultMotor.stop();
 Drive.driveFor(forward, 13.0, inches);
 Drive.turnToHeading(360, degrees, 200, rpm);
 Drive.driveFor(forward, 13.0, inches);
 Drive.turnToHeading(90, degrees, 200, rpm);
 Drive.driveFor(forward, 40.0, inches);
 dig1.set(true);
 dig2.set(true);



 
 
 // cata code
 //CatapultMotor.spin(vex::directionType::rev, 11, vex::voltageUnits::volt);
 //vex::task::sleep(31000);
 //CatapultMotor.stop();
//Drive.turnToHeading(327, degrees, 200, rpm);
//IntakeMotor.spin(reverse, intakeVelocity, rpm);
//vex::task::sleep(actionDuration);
//IntakeMotor.stop();







// Take 1st Triball
 //Drive.driveFor(forward, 48.0, inches);
 //stops here
 //Drive.turnToHeading(90, degrees, 200, rpm);
 //IntakeMotor.spin(forward, intakeVelocity, rpm);
 //vex::task::sleep(actionDuration);
 //IntakeMotor.stop();
 //Drive.driveFor(reverse, 20.0, inches);
 //wingsout
 //Drive.driveFor(forward, 22.0, inches);
 //Drive.driveFor(reverse, 2.0, inches);
 //Drive.driveFor(forward, 2.0, inches);
 //Drive.driveFor(reverse, 2.0, inches);
 //wings in
 //Drive.turnToHeading(235, degrees, 200, rpm);
 //Drive.driveFor(forward, 24.0, inches);
 //IntakeMotor.spin(forward, intakeVelocity, rpm);
 //Drive.driveFor(reverse, 24.0, inches);
 //Drive.turnToHeading(190, degrees, 200, rpm);
 //Drive.driveFor(forward, 3.0, inches);
 //IntakeMotor.spin(reverse, intakeVelocity, rpm);
 //Drive.driveFor(reverse, 3.0, inches);
 //Drive.turnToHeading(-, degrees, 200, rpm);
 //Drive.driveFor(forward, 15.0, inches);
 //IntakeMotor.spin(forward, intakeVelocity, rpm);
 //Drive.driveFor(reverse, 15.0, inches);
 //Drive.turnToHeading(-160, degrees, 200, rpm);
 //Drive.driveFor(reverse, 3.0, inches);
 //IntakeMotor.spin(reverse, intakeVelocity, rpm);
 //wingsout
 //Drive.driveFor(forward, 21.0, inches);
 //Drive.driveFor(reverse, 2.0, inches);
 //Drive.driveFor(forward, 2.0, inches);
 //Drive.driveFor(reverse, 2.0, inches);

// Drive.driveFor(forward, 8.0, inches);
// Drive.driveFor(reverse, 10.0, inches);
// Drive.driveFor(forward, 7.0, inches);
// Drive.driveFor(reverse, 7.0, inches);
// Drive.turnFor(-50, rotationUnits::deg, true);
// Drive.driveFor(reverse, 45.0, inches);
// Drive.turnFor(-45, rotationUnits::deg, true);
// Drive.driveFor(reverse, 22.0, inches);
// Drive.driveFor(forward, 2.0, inches);
 
//  Drive.driveFor(reverse, inches4, inches);
//  Drive.driveFor(forward, inches4, inches);
//  Drive.turnFor(degrees100, rotationUnits::deg, true);
//  Drive.driveFor(reverse, inches12, inches);
//  Drive.turnFor(degrees100, rotationUnits::deg, true);
//  Drive.driveFor(reverse, inches20, inches);
//  IntakeMotor.spin(forward, intakeVelocity, rpm);
//  vex::task::sleep(actionDuration);
//  IntakeMotor.stop();
//  Drive.driveFor(forward, 18.0, inches);
//  Drive.turnFor(degrees50, rotationUnits::deg, true);
//  Drive.driveFor(reverse, inches12, inches);
//  Drive.turnFor(degrees100, rotationUnits::deg, true);
//  IntakeMotor.spin(reverse, intakeVelocity, rpm);
// Drive.driveFor(reverse, inches15, inches);
}


void usercontrol(void) {
  const int deadbandThreshold = 10;

// catapult
  while (true) {
   if (Controller1.ButtonR1.pressing()) {
     // pull the catapult back
      CatapultMotor.spin(vex::directionType::fwd, 10, vex::voltageUnits::volt);
    } else if (Controller1.ButtonR2.pressing()) {
      // reverse catapult motor (for troubleshooting)
      CatapultMotor.spin(vex::directionType::rev, 10, vex::voltageUnits::volt);
    } else {
      CatapultMotor.stop();
  }
        
// wings       
    if (Controller1.ButtonX.pressing()) {
      dig1.set(true);
      dig2.set(true);
    } else if (Controller1.ButtonB.pressing()) {
      dig1.set(false);
      dig2.set(false);
    }
//wings
    //if (Controller1.ButtonX.pressing()) {   
      //dig2.set(true);
    //} else if (Controller1.ButtonB.pressing()) {
      //dig2.set(false);
    //}
//4 bar
    if (Controller1.ButtonY.pressing()) {
      dig3.set(true);
      dig4.set(true);
    } else if (Controller1.ButtonA.pressing()) {
      dig3.set(false);
      dig4.set(false);
    }
    

// intake
    if (Controller1.ButtonL1.pressing()) {
        IntakeMotor.spin(forward, 600, rpm);  
    } else if (Controller1.ButtonL2.pressing()) {
        IntakeMotor.spin(reverse, 600, rpm);  
    } else {
        IntakeMotor.stop();
    }
  
// drive (arcade)
    int yAxis = Controller1.Axis3.value();
    int xAxis = Controller1.Axis1.value();
      
    bool isJoystickMoved = abs(yAxis) > deadbandThreshold || abs(xAxis) > deadbandThreshold;

    if (isJoystickMoved){
        Drive.arcade(yAxis, xAxis);
    } else {
        Drive.stop();
    }

     vex::task::sleep(20); 
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
      }
}