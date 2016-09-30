#include "Fan.h"
#pragma once

Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5.0;
}

bool Fan::setSpeed(int)
{
	return false;
}

int Fan::getSpeed()
{
	return 0;
}

bool Fan::setOn(bool)
{
	return false;
}

bool Fan::getOn(bool)
{
	return false;
}

bool Fan::setRadius(double)
{
	return false;
}

double Fan::getRadius()
{
	return 0.0;
}
