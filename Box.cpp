/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/06/2018
 ** Description: This implements a class that represents a box.
 ** The data members are the height, width and length of the box,
 ** and has methods to return the volume and surface area of a box.
 *********************************************************************/


#include "Box.hpp"


/*********************************************************************
** Description: Default constructor initializing all data members as 1
** via set methods.
*********************************************************************/
Box::Box() {
  setHeight(1);
  setWidth(1);
  setLength(1);
}


/*********************************************************************
** Description: Overloaded constructor taking 3 doubles to initialize
** all data members with set methods.
*********************************************************************/
Box::Box(double heightIn, double widthIn, double lengthIn) {
  setHeight(heightIn);
  setWidth(widthIn);
  setLength(lengthIn);
}


void Box::setHeight(double heightIn) {
  height = heightIn;
}


void Box::setWidth(double widthIn) {
  width = widthIn;
}


void Box::setLength(double lengthIn) {
  length = lengthIn;
}


/*********************************************************************
** Description: Calculate the volume of a rectangular prism using the
** class data members, returning the result as a double.
*********************************************************************/
double Box::calcVolume() {
  return height * width * length;
}


/*********************************************************************
** Description: Calculates the surface area of a rectangular prism
** using the class data members and returns the result as a double.
*********************************************************************/
double Box::calcSurfaceArea() {
  return (2 * height * width) + (2 * height * length) + (2 * width * length);
}
