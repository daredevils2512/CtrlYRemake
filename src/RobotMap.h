// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<Encoder> driveTrainLeftEncoder;
	static std::shared_ptr<Encoder> driveTrainRightEncoder;
	static std::shared_ptr<CANJaguar> driveTrainSpeedController1;
	static std::shared_ptr<CANJaguar> driveTrainSpeedController2;
	static std::shared_ptr<CANJaguar> driveTrainFrontLeftMotor;
	static std::shared_ptr<CANJaguar> driveTrainRearLeftMotor;
	static std::shared_ptr<CANJaguar> driveTrainFrontRightMotor;
	static std::shared_ptr<CANJaguar> driveTrainRearRightMotor;
	static std::shared_ptr<RobotDrive> driveTrainChassis;
	static std::shared_ptr<Solenoid> shooterSolenoid1;
	static std::shared_ptr<Solenoid> shooterSolenoid2;
	static std::shared_ptr<Solenoid> shooterSolenoid3;
	static std::shared_ptr<Solenoid> shooterSolenoid4;
	static std::shared_ptr<Solenoid> shooterSolenoid5;
	static std::shared_ptr<Solenoid> shooterSolenoid6;
	static std::shared_ptr<Solenoid> shooterSolenoid7;
	static std::shared_ptr<Solenoid> shooterSolenoid8;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif