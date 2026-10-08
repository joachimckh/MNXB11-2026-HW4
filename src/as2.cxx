#include "as2.hpp"
#include <cmath>

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  
  return 42; 
}
float Foo::baz() {

  x=2.71f;
  return 3.14f;

}

std::vector<double> Foo::quux () {

  std::vector<double> vec = {1.0, 2.0, 3.0};
  return vec;
}


fVector2D operator+(const fVector2D& a, const fVector2D& b) {
  return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}
 
  







} // namespace homework
