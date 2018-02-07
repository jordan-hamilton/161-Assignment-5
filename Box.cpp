#include "Box.hpp"

Box::Box() {
  setHeight(1);
  setWidth(1);
  setLength(1);
}

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

double Box::calcVolume() {
  return height * width * length;
}

double Box::calcSurfaceArea() {
  return (2 * height * width) + (2 * height * length) + (2 * width * length);
}
