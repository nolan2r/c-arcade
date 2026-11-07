#pragma once

#include "Vector2.h"
#include <iostream>


class Point2 {
private:
  float x,y;
public:
  Point2();
  Point2(float px, float py);

  float getX() const;
  float getY() const;

  void setX(float px);
  void setY(float py);

  
};
