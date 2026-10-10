/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();

  int number = 4;
  homework::AddOneRef(number);
  std::cout << "Comes after 4:" << number << std::endl;

  std::cout << "Is 4 odd?" << homework::isOdd(4) << std::endl;

  //PART 2
  homework::Foo foo;
  std::cout << "Foo bar:" << foo.bar() << std::endl;
  std::cout << "Foo baz:" << foo.baz() << std::endl;

  homework::fVector2D a(1.0, 2.0);
  homework::fVector2D b(3.0, 4.0);
  homework::fVector2D c=a+b;

  std::cout << "Are a and b equal?" << (a==b) << std::endl;

  //PART 3
  homework::Apple apple(homework::Color::red);
  std::cout << "Fruit name" << apple.getName() << std::endl;
  std::cout << "fruit taste" << apple.getTaste() << std::endl;
  return 0;

}



