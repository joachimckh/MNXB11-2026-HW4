/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <typeinfo>

int main() { 
  // Example for as1.0
  homework::printHello();

  //Run as1.1
  int a=4;
  homework::AddOneRef(a);
  std::cout << "4+1= " << a << std::endl;

  //Run as1.2
  std::cout << std::boolalpha;
  std::cout << "Is 1 odd ? " << homework::isOdd(1) << std::endl;
  std::cout << "Is 2 odd ? " << homework::isOdd(2) << std::endl;

  //Run as1.4
  std::cout << "factorial 4 = " << homework::factorial(4) << std::endl;
  std::cout << "factorial 0 = " << homework::factorial(0) << std::endl;
  std::cout << "factorial -4 = " << homework::factorial(-4) << std::endl;

  // Run as2.1
  homework::Foo f{};
  std::cout << f.bar() << std::endl;
  std::cout << f.baz() << " and " << f.x << std::endl;
  for (double d:f.quux()) {
    std::cout << d << " ";
  }
  std::cout << std::endl;

  // Run as2.2
  homework::fVector2D vec(1,4);
  homework::fVector2D vec1(2,3);
  std::cout << (vec == vec1) << std::endl;

  //Run as3
  homework::Apple gala(homework::Color::red);
  std::cout << "Fruit's name is " << gala.getName() << std::endl;
  std::cout << "Fruit's color is " << gala.getColor() << std::endl;
  std::cout << "Fruit's taste is " << gala.getTaste() << std::endl;
  
}

