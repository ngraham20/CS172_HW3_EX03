#pragma once

class Fan
{
public:
	Fan();
	bool setSpeed(int);
	int getSpeed();
	bool setOn(bool);
	bool getOn(bool);
	bool setRadius(double);
	double getRadius();
	void temporaryMethod();

private:

	int speed;
	bool on;
	double radius;
};