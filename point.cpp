#include <point.h>

int main() { 
    //create point
    Point p; 
    cin >> p; 


    return 0; 
} 


Point::Point(double xx, double yy, double zz) {
    x = xx;
    y = yy; 
    z = zz;
}


double Point::getX() { return x;  } 

double Point::getY() { return y;  } 

double Point::getZ() { return z;  }

void Point::setX(double num)  { x = num;  }

void Point::setY(double num) { y = num;  }

void Point::setZ(double num) { z = num;  }

// shift the current point
void Point::shiftPoint(char axis, double amt) {
    if (axis == 'x') { x += amt; } 
    if (axis == 'y') { y += amt; }
    if (axis == 'z') { z += amt; } 
}

void Point::setPoint(double xx, double yy, double zz) {
        setX(xx);
        setY(yy);
        setZ(zz);
    }

void Point::retrivePoint(Point p) { 
    cout >> p >> endl;
 }

void Point::rotatePoint(char axis, double theta){
    if(axis == 'x'){
        setY(getY() * cos(theta) - getZ() * sin(theta));
        setZ(getY() * sin(theta) + getZ() * cos(theta));
    } 
    if (axis == 'y') {
        setX(getX() * cos(theta) + getZ() * sin(theta));
        setZ(-getX() * sin(theta) + getZ() * cos(theta));
    }
    if(axis == 'z'){
        setX(getX() * cos(theta) - getY() * sin(theta));
        setY(getX() * sin(theta) + getY() * cos(theta));
      }
}