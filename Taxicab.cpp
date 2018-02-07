#include <cstdlib>
#include "Taxicab.hpp"


Taxicab::Taxicab() {
  xCoordinate = 0;
  yCoordinate = 0;
  distanceTraveled = 0;
}


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


void Taxicab::moveX(int distanceX) {
  xCoordinate += distanceX;
  distanceTraveled += abs(distanceX);
}


void Taxicab::moveY(int distanceY) {
  yCoordinate += distanceY;
  distanceTraveled += abs(distanceY);
}
