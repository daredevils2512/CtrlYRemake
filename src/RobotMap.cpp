// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<Encoder> RobotMap::driveTrainLeftEncoder;
std::shared_ptr<Encoder> RobotMap::driveTrainRightEncoder;
std::shared_ptr<CANJaguar> RobotMap::driveTrainSpeedController1;
std::shared_ptr<CANJaguar> RobotMap::driveTrainSpeedController2;
std::shared_ptr<CANJaguar> RobotMap::driveTrainFrontLeftMotor;
std::shared_ptr<CANJaguar> RobotMap::driveTrainRearLeftMotor;
std::shared_ptr<CANJaguar> RobotMap::driveTrainFrontRightMotor;
std::shared_ptr<CANJaguar> RobotMap::driveTrainRearRightMotor;
std::shared_ptr<RobotDrive> RobotMap::driveTrainChassis;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid1;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid2;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid3;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid4;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid5;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid6;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid7;
std::shared_ptr<Solenoid> RobotMap::shooterSolenoid8;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainLeftEncoder.reset(new Encoder(0, 1,false, Encoder::k4X));
    lw->AddSensor("Drive Train", "LeftEncoder", driveTrainLeftEncoder);
    
    driveTrainRightEncoder.reset(new Encoder(2, 3,false, Encoder::k4X));
    lw->AddSensor("Drive Train", "RightEncoder", driveTrainRightEncoder);
    


    driveTrainChassis.reset(new RobotDrive(driveTrainFrontLeftMotor, driveTrainRearLeftMotor,
    		driveTrainFrontRightMotor, driveTrainRearRightMotor));
    
    driveTrainChassis->SetSafetyEnabled(false);
        driveTrainChassis->SetExpiration(0.1);
        driveTrainChassis->SetSensitivity(0.3);
        driveTrainChassis->SetMaxOutput(1.0);

    shooterSolenoid1.reset(new Solenoid(0, 0));
    lw->AddActuator("Shooter", "Solenoid 1", shooterSolenoid1);
    
    shooterSolenoid2.reset(new Solenoid(0, 1));
    lw->AddActuator("Shooter", "Solenoid 2", shooterSolenoid2);
    
    shooterSolenoid3.reset(new Solenoid(0, 2));
    lw->AddActuator("Shooter", "Solenoid 3", shooterSolenoid3);
    
    shooterSolenoid4.reset(new Solenoid(0, 3));
    lw->AddActuator("Shooter", "Solenoid 4", shooterSolenoid4);
    
    shooterSolenoid5.reset(new Solenoid(0, 4));
    lw->AddActuator("Shooter", "Solenoid 5", shooterSolenoid5);
    
    shooterSolenoid6.reset(new Solenoid(0, 5));
    lw->AddActuator("Shooter", "Solenoid 6", shooterSolenoid6);
    
    shooterSolenoid7.reset(new Solenoid(0, 6));
    lw->AddActuator("Shooter", "Solenoid 7", shooterSolenoid7);
    
    shooterSolenoid8.reset(new Solenoid(0, 7));
    lw->AddActuator("Shooter", "Solenoid 8", shooterSolenoid8);
    

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}