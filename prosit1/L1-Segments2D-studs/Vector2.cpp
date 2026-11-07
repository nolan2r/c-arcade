#include "Vector2.h"

float Vector2::getX() const {
    return x;
}

float Vector2::getY() const {
    return y;
}

Vector2::Vector2(){
    x=0;
    y=0;
}

Vector2::Vector2(float px, float py){
        setx(px);
        sety(py);
}


void Vector2::setx(float px){
        px=x;
    }

void Vector2::sety(float py){
        py=y;
    }

    