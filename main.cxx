/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>
#include <vector>

int main() { 
  // Example for as1.0
  homework::printHello();

  //as 1.1
  int a = 5;
  homework::AddOneRef(a);
  std::cout << "1. AddOneRef: " << a << std::endl;

  //as 1.2
  homework::isOdd(5);
  homework::isOdd(4);
  std::cout << std::boolalpha;
  std::cout << "2. isOdd(5): " << homework::isOdd(5) << std::endl;
  std::cout << "2. isOdd(4): " << homework::isOdd(4) << std::endl;

  //as 1.3
  homework::floatToInt(3.14);
  std::cout << "3. floatToInt(3.14): " << homework::floatToInt(3.14) << std::endl;

  //as 1.4
  homework::factorial(3);
  std::cout << "4. factorial(3): " << homework::factorial(3) << std::endl;

  //as 2.1
  homework::Foo foo;
  int resultint = foo.bar();
  std::cout << "2.1. bar(): " << resultint << std::endl;
  
  float resultfloat = foo.baz();
  std::cout << "2.1. baz(): " << resultfloat << std::endl;
  std::cout << "2.1. x: " << foo.x << std::endl;

  std::vector<double> values = foo.quux();
  for (double value : values) {
    std::cout << value << " " << std::endl;
  }

//as 2.2
homework::fVector2D v1(1.0f, 2.0f);
homework::fVector2D v2(3.0f, 4.0f);
homework::fVector2D v3 = v1 + v2;
std::cout << "2.2 v1 == v1: " << (v1 == v1) << std::endl;
std::cout << "2.2 v1 == v2: " << (v1 == v2) << std::endl;

}

