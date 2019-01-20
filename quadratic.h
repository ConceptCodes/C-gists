#include <iostream>
using namespace std;

class Quadratic {
  private:
    double a, b, c;
  public:
    Quadratic(double aa, double bb, double cc);
    double get_a() const;
    double get_b() const;
    double get_c() const;
    double evaluate(double x) const;    
    void display(ostream & out) const;
};

Quadratic operator+( const Quadratic& q1, const Quadratic& q2 );

Quadratic operator*( double r, const Quadratic& q );

ostream & operator<<(ostream & out, const Quadratic & q);