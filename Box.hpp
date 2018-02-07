#ifndef BOX_HPP
#define BOX_HPP

class Box {

  private:
    double height;
    double width;
    double length;

  public:
    Box();
    Box(double heightIn, double widthIn, double lengthIn);
    void setHeight(double heightIn);
    void setWidth(double widthIn);
    void setLength(double lengthIn);
    double calcVolume();
    double calcSurfaceArea();
};

#endif
