#include "as2.hpp"
#include <vector>

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
  std::vector<double> x{1.0, 2.0, 3.0};
  return x;
}

fVector2D operator+(const fVector2D &v, const fVector2D &u) {
  return fVector2D(v.x_+u.x_, v.y_+u.y_);
}

bool operator==(const fVector2D &v, const fVector2D &u) {
  return v.x_ == u.x_ && v.y_ == u.y_;
}

} // namespace homework
