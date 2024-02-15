	//first movement onto matchload
	rightMoveVel(600);
	pros::delay(300);
	intake.move(127);
	leftMoveVel(600);
	pros::delay(200);
	intake.move(0);
	rightMoveVel(0);
	leftMoveVel(0);
	ImuPidHeading(-90-72, "all", 0, 0);
	pusherR.set_value(1);
	leftMoveVel(300);
	rightMoveVel(300);
	pros::delay(150);


	//matchloading time
	catapult1.move(127);
	pros::delay(26000);
	intake.move(-127);
	pros::delay(2000);
	intake.move(0);
	while (cata.get_angle() < 5000 || cata.get_angle() > 30000){
		pros::delay(10);
	}
	catapult1.move(0);

	ImuPidHeading(-90-55, "all", 0, 0);
	rightMoveVel(600);
	pros::delay(200);
	leftMoveVel(600);
	pros::delay(600);
	ImuPidHeading(5, "left", 0, 0);
	ImuPidHeading(-5, "", 0, 0);
	intake.move(-127);
	rightMoveVel(600);
	leftMoveVel(600);
	pros::delay(700);
	rightMoveVel(-600);
	leftMoveVel(-600);
	pros::delay(100);
	ImuPidHeading(85,"left",0,0);
	pusherR.set_value(1);
	rightMoveVel(600);
	leftMoveVel(600);
	pros::delay(1400);
	rightMoveVel(-600);
	leftMoveVel(-600);
	pros::delay(400);
	ImuPidHeading(85,"",0,0);

	rightMoveVel(600);
	leftMoveVel(600);
	pros::delay(600);
	rightMoveVel(-600);
	leftMoveVel(-600);
	pros::delay(400);
	ImuPidHeading(-90-72,"",0,0);