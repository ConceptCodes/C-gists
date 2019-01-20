#include <iostream>
#include <cmath>
#include <quadratic.h>

using namespace std;

int main() {
    double x = 5;
    Quadratic q1(2,4,6);
    Quadratic q2(8,10,12);
    Quadratic q3 = q1 + q2;
    Quadratic q4 = x * q2;
    
    cout << "Quadratic equation [1] is => " << q1 << endl;
    cout << "Quadratic equation [2] is => " << q2 << endl;
    cout << "(Q1 + Q2) => " << q3  <<endl;
    cout << "(Q1 * " << x << ") =>" << q4 <<endl;
    cout << endl;

    cout << "Q1 ~ Q4 {x: 5}\n" <<endl;
    cout << "Q1 => " << q1.evaluate(x) << endl;
    cout << "Q2 => " << q2.evaluate(x) << endl;
    cout << "Q3 => " << q3.evaluate(x) << endl;
    cout << "Q4 => " << q4.evaluate(x) << endl;
    cout << endl;
    
    return 0;
}

Quadratic::Quadratic(double aa, double bb, double cc) {
    a = aa;
    b = bb;
    c = cc;
}

double Quadratic::get_a() const {  return a; }

double Quadratic::get_b() const {  return b; }

double Quadratic::get_c() const {  return c; }

double Quadratic::evaluate(double x) const {  return (a * pow(x, 2)) + (b * x) + c; }

void Quadratic::display(ostream & out) const {  out << a << "x^2 + " << b << "x + " << c; }

Quadratic operator+( const Quadratic& q1, const Quadratic& q2 ) {
  double sum_a, sum_b, sum_c;
  
  sum_a = q1.get_a() + q2.get_a();
  sum_b = q1.get_b() + q2.get_b();
  sum_c = q1.get_c() + q2.get_c();
  
  Quadratic sum(sum_a, sum_b, sum_c);
  
  return sum;
}

Quadratic operator*( double r, const Quadratic& q ) {
  double product_a, product_b, product_c;

  product_a = q.get_a() * r;
  product_b = q.get_b() * r;
  product_c = q.get_c() * r;

  Quadratic product(product_a, product_b, product_c);

  return product;
}

ostream & operator<<(ostream & out, const Quadratic & q) {
  q.display(out);
  return out;
}