/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"

#include <iostream>

int main() { 

  std::cout << "------------- Assignment 1 -------------" << std::endl;

  // Example for as1.0
  homework::printHello();

  // as1.1
  std::cout << "Test as1.1, should give output 2" << std::endl;
  int a{1};
  homework::AddOneRef(a);
  std::cout << a << std::endl;

  // as1.2
  std::cout << "Test as1.2, should give output true (1)" << std::endl;
  float b{7};
  std::cout << homework::isOdd(b) << std::endl;

  // as1.3
  std::cout << "Test as1.3, should give output 1" << std::endl;
  float c{1.7};
  std::cout << homework::floatToInt(c) << std::endl;

  // as1.4
  std::cout << "Test as1.4, should give output 5!" << std::endl;
  int d{5};
  std::cout << homework::factorial(d) << std::endl;

  std::cout << "------------- Assignment 2 -------------" << std::endl;

  // as2.1
  std::cout << "Test as2.1, should give output 42, 3.14, 2.71, and (1.0, 2.0, 3.0) " << std::endl;
  homework::Foo foo;
  std::cout << foo.bar() << std::endl;
  std::cout << foo.baz() << std::endl;
  std::cout << foo.x << std::endl;
  for (double i: foo.quux()) {
    std::cout << i << " " << std::endl;
  }

  // as2.2
  std::cout << "Test as2.2, should output true (1)" << std::endl;
  homework::fVector2D v1{2.0,2.5};
  homework::fVector2D v2{2.0,2.5};
  homework::fVector2D v3{4.0,5.0};
  if (v1+v2==v3) {
    std::cout << 1 << std::endl;
  }

  std::cout << "------------- Assignment 3 -------------" << std::endl;
  std::cout << "Should output pear, green (1), fruit is good, apple, red (0), sweet" << std::endl;
  homework::Fruit fruit{"pear", homework::Color::green};
  std::cout << fruit.getName() << std::endl;
  if (fruit.getColor() == homework::Color::green) {
    std::cout << "green" << std::endl;
  }
  std::cout << fruit.getTaste() << std::endl;
  
  homework::Apple apple{homework::Color::red};
  std::cout << apple.getName() << std::endl;
  if (apple.getColor() == homework::Color::red) {
    std::cout << "red" << std::endl;
  }
  std::cout << apple.getTaste() << std::endl;


  return 0;

}

