#include "as2.hpp"

//2.1

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
};

float Foo::baz() {
  return 3.14f;
  x = 2.71f;
};

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
};


//2.2 

class fVector2D {
  public: 
  //define vectors x and y 
    fVector2D() = default;
    fVector2D(float x, float y) : x_(x), y_(y) {}

    //overload + 
    friend fVector2D operator+(const fVector2D& v1, const fVector2D& v2){
      return fVector2D(v1.x_ + v2.x_, v1.y_ + v2.y_);
    }

    bool operator==(const fVector2D& other) const{
      return x_ == other.x_ && y_ == other.y_;
    }

  
  private: 
    float x_;
    float y_;

};



} // namespace homework
