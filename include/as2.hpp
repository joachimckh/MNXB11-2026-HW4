#ifndef AS2_HPP
#define AS2_HPP 
#include <vector>

namespace homework {
// Hint for these exercises: Lecture 5 slides

// As 2.1 struct with a method that returns an int
// TO DO: in src/as1.cxx, implement the method bar() of the struct Foo to return 42.
// TO DO: in src/as1.cxx, implement the method baz() of the struct Foo to return 3.14 and set the member variable x to 2.71
// TO DO: in src/as1.cxx, implement the method quux() of the struct Foo to return a vector of doubles {1.0, 2.0, 3.0}

//we need a struct which is simular to a class, we define a integer bar, float baz and a quux which is a vector with one digit 
struct Foo { 
  int bar();
  float baz();
  std::vector<double> quux();

// baz was defined a float so if x is part of that it needs to be a float as well
  float x;
};


// As 2.2 (Operator overloading) custom vector class, that will overload operators
// TO DO: implement the overloaded + operator and == operator
// + operator should return a fVector2D that is the element-wise sum of two vectors
// == operator should return true if two vectors are equal (element-wise)
// HINT: you can use friend functions for operator overloading (+)
// and member functions for operator overloading (==)

// we define a new class which is a two dimentional vector
// the two dimentions are x and y where the parameter and the variables are linked 
class fVector2D {
public:
  fVector2D(float x, float y)
{
    x_ = x;
    y_ = y;
}

  //shows that you will overload ; define multiple functions with same name but diff parameters 
    // of fucntion we have a summation of vectors a and b  while the functions themselves are not changed 
    // + as a friend function using an operator
    friend fVector2D operator+(const fVector2D& a, const fVector2D& b);

    // return of type bool (true or false)
    // function with not changed vector a and b -- allows to say if vectors are equal 
    //expects to compare to two functions and all remain constant 
    bool operator==(const fVector2D& vectorb) const;

private:
  float x_;
  float y_;
};

} // namespace homework

#endif // AS2_HPP
