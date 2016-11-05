#include "Elevator.h"
#include "../RobotMap.h"

Elevator::Elevator() :
		Subsystem("Elevator")
{
	leftMotor = new Jaguar(MOTOR_LEFT);
	rightMotor = new Jaguar(MOTOR_RIGHT);
	encoderLeft = new Encoder(ENCODER_LEFT_1, ENCODER_LEFT_2);
	encoderRight = new Encoder(ENCODER_RIGHT_1, ENCODER_RIGHT_2);
}

Elevator::~Elevator(){
	delete leftMotor;
	delete rightMotor;
	delete encoderLeft;
	delete encoderRight;
}


void Elevator::resetEncoders()
{
    encoderLeft->Reset();
    encoderRight->Reset();
}

void Elevator::moveElevatorUp()
{
	leftMotor->SetSpeed(1);
	rightMotor->SetSpeed(1);
}

void Elevator::moveElevatorDown()
{
	leftMotor->SetSpeed(-1);
	rightMotor->SetSpeed(-1);
}

void Elevator::Stop()
{
	leftMotor->SetSpeed(0);
	rightMotor->SetSpeed(0);
}
