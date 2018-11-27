/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/DriveTrain.h"
#include "Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem"), left(new TalonSRX(0)), right(new TalonSRX(1)) {

}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftPow, double rightPow){
  left->Set(ControlMode::PercentOutput, leftPow);
  right->Set(ControlMode::PercentOutput, rightPow);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
