/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/06/2018
 ** Description: This implements a class that represents a taxicab.
 ** The data members are the x and y-coordinates and total distance
 ** traveled.
 *********************************************************************/


#include <cstdlib>
#include "Taxicab.hpp"


/*********************************************************************
** Description: Default constructor initializing all data members as 0
*********************************************************************/
Taxicab::Taxicab() {
  xCoordinate = 0;
  yCoordinate = 0;
  distanceTraveled = 0;
}

/*********************************************************************
** Description: Overloaded constructor initializing the x and y-
** coordinates as the value of the passed parameters, also intializing
** the total distance traveled as 0.
*********************************************************************/
Taxicab::Taxicab(int xIn, int yIn) {
  xCoordinate = xIn;
  yCoordinate = yIn;
  distanceTraveled = 0;
}


int Taxicab::getXCoord() {
  return xCoordinate;
}


int Taxicab::getYCoord() {
  return yCoordinate;
}


int Taxicab::getDistanceTraveled() {
  return distanceTraveled;
}

/*********************************************************************
** Description: Adds the parameter value to the current x-coordinate,
** then increases the total distance traveled by the absolute value
** of the parameter, since we're accumulating total distance.
*********************************************************************/
void Taxicab::moveX(int distanceX) {
  xCoordinate += distanceX;
  distanceTraveled += abs(distanceX);
}

/*********************************************************************
** Description: Adds the parameter value to the current y-coordinate,
** then increases the total distance traveled by the absolute value
** of the parameter.
*********************************************************************/
void Taxicab::moveY(int distanceY) {
  yCoordinate += distanceY;
  distanceTraveled += abs(distanceY);
}
