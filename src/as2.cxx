#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  x=2.71;
  return 3.14;
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}

fVector2D operator+(const fVector2D& lhs, const fVector2D& rhs){
  return fVector2D(lhs.x_ + rhs.x_ , lhs.y_ + rhs.y_ );
}

bool fVector2D::operator==(const fVector2D& rhs){
  return (x_== rhs.x_) && (y_ == rhs.y_);
}
} // namespace homework
