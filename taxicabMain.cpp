#include <iostream>
#include "Taxicab.hpp"

using std::cout;
using std::endl;

int main() {
  Taxicab cab1;
  cout << cab1.getXCoord() << "," << cab1.getYCoord() << ": " << cab1.getDistanceTraveled() << endl;
  Taxicab cab2(5, -8);
  cout << cab2.getXCoord() << "," << cab2.getYCoord() << ": " << cab2.getDistanceTraveled() << endl;
  cab1.moveX(3);
  cab1.moveY(-4);
  cab1.moveX(-1);
  cout << "cab1 x coordinate: " << cab1.getXCoord() << endl;
  cout << "cab1 y coordinate: " << cab1.getYCoord() << endl;
  cout << "cab1 distanceTraveled: " << cab1.getDistanceTraveled() << endl;
  cab2.moveY(7);
  cout << "cab2 x coordinate: " << cab2.getXCoord() << endl;
  cout << "cab2 y coordinate: " << cab2.getYCoord() << endl;
  cout << "cab2 distanceTraveled: " << cab2.getDistanceTraveled() << endl;
}
