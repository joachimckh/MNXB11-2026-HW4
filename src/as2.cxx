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
  std::vector<double> v = {1.0, 2.0, 3.0};
  return v;
}


fVector2D operator+(const fVector2D& vec1, const fVector2D& vec2){
  return fVector2D(vec1.x_ + vec2.x_, vec1.y_ + vec2.y_);
}

bool fVector2D::operator==(const fVector2D& other){
  if (x_ == other.x_ && y_ == other.y_){
    return true;
  }
  return false;
}

} // namespace homework
