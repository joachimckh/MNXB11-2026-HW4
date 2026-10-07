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
  return {1.0, 2.0, 3.0};
}

bool fVector2D::operator==(const fVector2D& vec2) const{
  if ((x_ == vec2.x_) && (y_ == vec2.y_))
  {
    return true;
  }
  else
  return false;
}

fVector2D operator+(const fVector2D& vec1, const fVector2D& vec2) {
  return fVector2D(vec1.x_ + vec2.x_, vec1.y_ + vec2.y_);
}
} // namespace homework
