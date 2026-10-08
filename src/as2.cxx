#include "as2.hpp"

namespace homework {

// implement Foo methods here
//Assingment 2.0 

// we defined foo as a integer of method bar which is supposingly equal to 42 
int Foo::bar() 
{ return 42; }

// baz of struc foo was a float and if x was a float 2.71 it should give the float 3.14 
float Foo::baz()
{
    x = 2.71f;
    return 3.14f;
}

// defines return type == vector and the vector it shoudl return in two digits (not an int)
std::vector<double> Foo::quux() 
{ return {1.0, 2.0, 3.0}; }

//Assigment 2.1

// uses the summation friend function and sums the x of a and b and the y of a and b
fVector2D operator+(const fVector2D& a, const fVector2D& b)
{ return fVector2D(a.x_ + b.x_, a.y_ + b.y_); }

// to check if the vectors are the same, check if x and y are both equal the bool handles the true/false 
bool fVector2D::operator==(const fVector2D& vectorb) const
{
    return x_ == vectorb.x_ && y_ == vectorb.y_;
}

} // namespace homework