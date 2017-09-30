void carrierUp()
{
	motor(rightCarrierMotor) = fullPower;
	motor(leftCarrierMotor) = fullPower;
}

void carrierDown()
{
	motor(rightCarrierMotor) = reverseFullPower;
	motor(leftCarrierMotor) = reverseFullPower;
}

void carrierStop()
{
	motor(rightCarrierMotor) = stopPower;
	motor(leftCarrierMotor) = stopPower;
}

void clawOpen()
{
	motor(clawMotor) = fullPower;
}

void clawSlowOpen()
{
	motor(clawMotor) = reverseSlowPower;
}

void clawClose()
{
	motor(clawMotor) = reverseFullPower;
}

void clawStop()
{
	motor(clawMotor) = stopPower;
}

void innerLiftUp()
{
	motor(rightLiftMotor) = fullPower;
	motor(leftLiftMotor) = fullPower;
}

void innerLiftSlowUp()
{
	motor(rightLiftMotor) = halfPower;
	motor(leftLiftMotor) = halfPower;
}

void innerLiftDown()
{
	motor(rightLiftMotor) = reverseFullPower;
	motor(leftLiftMotor) = reverseFullPower;
}

void innerLiftSlowDown()
{
	motor(rightLiftMotor) = reverseSlowPower;
	motor(leftLiftMotor) = reverseSlowPower;
}

void innerLiftStop()
{
	motor(rightLiftMotor) = stopPower;
	motor(leftLiftMotor) = stopPower;
}

void outerLiftUp()
{
	motor(outerLiftMotor) = fullPower;
}

void outerLiftDown()
{
	motor(outerLiftMotor) = reverseFullPower;
}

void outerLiftSlowUp()
{
	motor(outerLiftMotor) = halfPower;
}

void outerLiftSlowDown()
{
	motor(outerLiftMotor) = reverseHalfPower;
}

void outerLiftStop()
{
	motor(outerLiftMotor) = stopPower;
}

void zone1InnerLiftStay()
{
	motor(rightLiftMotor) = stayPower;
	motor(leftLiftMotor) = stayPower;
}

void zone2InnerLiftStay()
{
	motor(rightLiftMotor) = reverseStayPower;
	motor(leftLiftMotor) = reverseStayPower;
}

void zone1OuterLiftStay()
{
	motor(outerLiftMotor) = stayPower;
}

void zone2OuterLiftStay()
{
	motor(outerLiftMotor) = stayPower;
}


void runInnerLift(long speed)
{
	motor[leftLiftMotor] = speed;
	motor[rightLiftMotor] = speed;
}

void runOuterLift(long speed)
{
	motor(outerLiftMotor) = speed;
}

void resetSensor(tSensors sensor)
{
	SensorValue(sensor) = stopPower;
}

void runClaw(int speed)
{
	motor(clawMotor) = speed;
}

void runCarrier(int speed)
{
	motor(rightCarrierMotor) = speed;
	motor(leftCarrierMotor) = speed;
}

void runDrive(int speed)
{
	motor(rightDrive) = speed;
	motor(leftDrive) = speed;
}

void switchLed(tSensors LED, int light)
{
	SensorValue(LED) = light;
}

void turnLeft(int speed)
{
	motor(rightDrive) = -speed;
	motor(leftDrive) = speed;
}

void turnRight(int speed)
{
	motor(rightDrive) = speed;
	motor(leftDrive) = -speed;
}


void runForward(int distance, int speed)
{
	while(SensorValue(driveEncoder) ISUNDER distance)
	{
		runDrive(speed);
	}
	runDrive(stopPower);
}

void runBackward(int distance, int speed)
{
	while(SensorValue(driveEncoder) ISOVER distance)
	{
		runDrive(speed);
	}
	runDrive(stopPower);
}

void turnOnlyLeft(int distance, int speed)
{
	while(SensorValue(driveEncoder) ISOVER distance)
	{
		turnLeft(speed);
	}
	runDrive(stopPower);
}

void turnOnlyRight(int distance, int speed)
{
	while(SensorValue(driveEncoder) ISUNDER distance)
	{
		turnRight(speed);
	}
	runDrive(stopPower);
}

void wait()
{
	delay(100);
}

void holdUp(int time)
{
	delay(time);
}


