#include "as2.hpp"

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz(){
  x = 2.71;
  return 3.14;
}

std::vector<double> Foo::quux(){
  return{1.0, 2.0, 3.0};
}

fVector2D operator+(const fVector2D& a, const fVector2D& b) {
  return fVector2D(a.x_ + b.x_, a.y_ + b.y_);
}

bool fVector2D::operator==(const fVector2D& other) const {
  if (x_ == other.x_ && y_ == other.y_){
    return true;
  }
  else {
    return false;
  }
}

} // namespace homework
