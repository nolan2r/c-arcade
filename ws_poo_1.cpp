
#include <iostream>
#include <string>
/*
class Date {
    public : 
    int j;
    int m;
    int a;

    void afficher(){
   
        std::cout <<j<<"/"<<m<<"/"<<a<<std::endl;
    }
    void incr(){
        if (j == 31) {
            j=1;
            m+=1;
            return;
        }
        if (j == 28 && m == 2){
            j=1;
            m=3;
            return;
        
        }
        if (j==30 && (m==4 ||m==6 ||m==9 ||m==11)){
            j=1;
            m+=1;
            return;
        }

        if (j == 31 && m == 12){
            j=1;
            m=1;
            a+=1;
            return;

        }
        j+=1;
    }
};

int main(){
    Date d1;
    std::cin>>d1.j;
    std::cin>>d1.m;
    std::cin>>d1.a;
    d1.afficher();
    d1.incr();
    d1.afficher();

}
*/

#include <cmath>
class Circle {
    //Position of the center
    public : 
    double x;
    double y;

    double r; // radius
// Set the position of the center
    void set_pos(double x1, double y1) {
    x = x1;
    y = y1;
    }

// Calculate the perimeter of the circle
    double perimeter() {
    return 2 * M_PI * r;
    }

    double area() {
    return M_PI * r * r;
    }

};

class Rectangle {
    public : 
    //Position of the top left corner
    double x;
    double y;

    double w; //width
    double h; //height  
// Set the position of the top left corner
    void set_pos(double x1, double y1) {
    x = x1;
    y = y1;
    }
// Calculate the perimeter of the rectangle
    double perimeter() {
    return 2 * (w + h);
    }
    double area() {
    return w*h;
    }
  
};


//TODO: Add a method to calculate the area of the circle



// TODO: Add a method to calculate the area of the rectangle


int main() {
    Circle c;
    c = {0, 0, 1};
    std::cout << c.perimeter() << std::endl;
    std::cout << c.area() << std::endl;

    c.set_pos(1, 1);
    std::cout << "Coordinates of the center: (" << c.x << ", " << c.y << ")" << std::endl;

    Rectangle r;
    r={0, 0, 1, 2};
    std::cout << r.perimeter() << std::endl;
    std::cout << r.area() << std::endl;

    r.set_pos(-1, -1);
    std::cout << "Coordinates of the top left corner: (" << r.x << ", " << r.y << ")" << std::endl;
    return 0;
}

