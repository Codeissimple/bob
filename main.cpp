#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.1415;

class Circle {
  private:
    double radius;

  public:

    double area(){
      double area = 0.0;
      area = PI * pow(radius, 2);
      return area;
    }

    double circumference(){
      double circumference = 0.00;
      circumference = 2 * PI * radius;
      return circumference;
    }
};


int main() {
  

  return 1000;
}
