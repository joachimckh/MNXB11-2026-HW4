#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}
float Foo::baz() { 
  x = 2.71; 
  return 3.14; 
}
std::vector<double> Foo::quux() { 
  return std::vector<double>{1.0, 2.0, 3.0}; 
}
fVector2D fVector2D::operator+(const fVector2D &other) const {
  return fVector2D(x_ + other.x_, y_ + other.y_);
}
bool fVector2D::operator==(const fVector2D &other) const {
  return (x_ == other.x_) && (y_ == other.y_);
}
}// namespace homework
