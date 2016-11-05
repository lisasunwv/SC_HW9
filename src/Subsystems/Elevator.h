#ifndef Elevator_H
#define Elevator_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Elevator: public Subsystem
{
private:
	Jaguar* leftMotor;
	Jaguar* rightMotor;
	Encoder* encoderLeft;
	Encoder* encoderRight;
public:
	Elevator();
	~Elevator();
	void resetEncoders();
	void moveElevatorUp();
	void moveElevatorDown();
	void Stop();
};

#endif
