void innerLiftUp()
{
	motor[leftLiftMotor] = maxPower;
	motor[rightLiftMotor] = maxPower;
}
void innerLiftSlowUp()
{
	motor[leftLiftMotor] = halfPower;
	motor[rightLiftMotor] = halfPower;
}
void innerLiftDown()
{
	motor[leftLiftMotor] = reverseMaxPower;
	motor[rightLiftMotor] = reverseMaxPower;
}
void innerLiftSlowDown()
{
	motor[leftLiftMotor] = reverseHalfPower;
	motor[rightLiftMotor] = reverseHalfPower;
}
void innerLiftStop()
{
	motor[leftLiftMotor] = stopPower;
	motor[rightLiftMotor] = stopPower;
}
void zone1InnerLiftStop()
{
	motor[leftLiftMotor] = liftStopPower;
	motor[rightLiftMotor] = liftStopPower;
}
void zone2InnerLiftStop()
{
	motor[leftLiftMotor] = reverseLiftStopPower;
	motor[rightLiftMotor] = reverseLiftStopPower;
}
void outerLiftUp()
{
	motor[outerLiftMotor] = threeQuarterPower;
}
void outerLiftDown()
{
	motor[outerLiftMotor] = reverseThreeQuarterPower;
}
void outerLiftStop()
{
	motor[outerLiftMotor] = stopPower;
}
void zone1OuterLiftStop()
{
	motor[outerLiftMotor] = liftStopPower;
}
void zone2OuterLiftStop()
{
	motor[outerLiftMotor] = reverseLiftStopPower;
}
void outerLiftSlowUp()
{
	motor[outerLiftMotor] = halfPower;
}
void outerLiftSlowDown()
{
	motor[outerLiftMotor] = reverseHalfPower;
}
void carrierUp()
{
	motor[leftCarrierMotor] = maxPower;
	motor[rightCarrierMotor] = maxPower;
}
void carrierDown()
{
	motor[leftCarrierMotor] = reverseMaxPower;
	motor[rightCarrierMotor] = reverseMaxPower;
}
void carrierStop()
{
	motor[leftCarrierMotor] = stopPower;
	motor[rightCarrierMotor] = stopPower;
}
void clawClose()
{
	motor[clawMotor] = halfPower;
}
void clawOpen()
{
	motor[clawMotor] = reverseMaxPower;
}
void clawSlowOpen()
{
	motor[clawMotor] = reverseSlowPower;
}
void clawStop()
{
	motor[clawMotor] = stopPower;
}
void switchLED(tSensors LED, int light)
{
	SensorValue(LED) = light;
}
void runDrive(int speed)
{
	motor[leftMotor] = speed;
	motor[rightMotor] = speed;
}
void turnLeft(int speed)
{
	motor[leftMotor] = -speed;
	motor[rightMotor] = speed;
}
void turnRight(int speed)
{
	motor[leftMotor] = speed;
	motor[rightMotor] = -speed;
}
void runInnerLift(int speed)
{
	motor[leftLiftMotor] = speed;
	motor[rightLiftMotor] = speed;
}
void runOuterLift(int speed)
{
	motor[outerLiftMotor] = speed;
}
void runCarrier(int speed)
{
	motor[leftCarrierMotor] = speed;
	motor[rightCarrierMotor] = speed;
}
void runClaw(int speed)
{
	motor[clawMotor] = speed;
}
void runForward(int distance, int speed)
{
	while(SensorValue(driveEncoder) <= distance)
	{
		runDrive(speed);
	}
	runDrive(stopPower);
}
void runBackward(int distance, int speed)
{
	while(SensorValue(driveEncoder) >= distance)
	{
		runDrive(speed);
	}
	runDrive(stopPower);
}
void turnOnlyLeft(int distance, int speed)
{
	while(SensorValue(driveEncoder) >= distance)
	{
		turnLeft(speed);
	}
	runDrive(stopPower);
}
void turnOnlyRight(int distance, int speed)
{
	while(SensorValue(driveEncoder) <= distance)
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
void resetSensor(tSensors sensor)
{
	SensorValue(sensor) = stopPower;
}
