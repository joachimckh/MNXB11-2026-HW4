#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  float x = 2.71;
  return 3.14;
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}

fVector2D operator+(const fVector2D& a, const fVector2D& b) {
  return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}

bool fVector2D::operator==(const fVector2D& a) const {
  return (a.x_ == x_) && (a.y_ == y_);
}


} // namespace homework
