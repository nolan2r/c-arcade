#include "Point2.h"


Point2::Point2() {
    x=0;
    y=0;
}

Point2::Point2(float px, float py){
    x=px;
    y=py;
}

float Point2::getX() const {
    return x;
}

float Point2::getY() const {
    return y;
}

float Point2::setX(float px) {
    x=px;
}

float Point2::setY(float py) {
    y=py;
}
