#include "as2.hpp"

//2.1

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


//2.2 

    //overload + 
    fVector2D operator+(const fVector2D& v1, const fVector2D& v2){
      return fVector2D(v1.x_ + v2.x_, v1.y_ + v2.y_);
    }

    bool fVector2D::operator==(const fVector2D& other) const{
      return x_ == other.x_ && y_ == other.y_;
    }



} // namespace homework
