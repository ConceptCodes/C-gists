#include <iostream> 
#include <cmath>
using namespace std; 
  
class Point { 
private:
    double x, y, z; 

public: 
    // Default Constructor 
    Point(double xx=0, double yy=0, double zz=0); 
    double getX(); 
    double getY(); 
    double getZ();
    void setX(double num);
    void setY(double num);
    void setZ(double num);
    void shiftPoint(char axis, double amt);
    void setPoint(double xx, double yy, double zz);
    void retrivePoint(Point p);
    void rotatePoint(char axis, double theta);
    friend ostream & operator << (ostream &out, const Point &p); 
    friend istream & operator >> (istream &in,  Point &p); 
};

ostream & operator << (ostream &out, const Point &p) { 
    out << "( " << p.x << ", " << p.y << ", " << p.z << ")" << endl; 
    return out; 
} 
  
istream & operator >> (istream &in,  Point &p) { 
    cout << "Enter X: "; 
    in >> p.x; 
    cout << "Enter Y:  "; 
    in >> p.y; 
    cout << "Enter Z:  "; 
    in >> p.z; 
    return in; 
} 