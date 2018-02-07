#ifndef TAXICAB_HPP
#define TAXICAB_HPP


class Taxicab {

  private:
    int xCoordinate;
    int yCoordinate;
    int distanceTraveled;

  public:
    Taxicab();
    Taxicab(int xIn, int yIn);
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    void moveX(int distanceX);
    void moveY(int distanceY);

};


#endif
