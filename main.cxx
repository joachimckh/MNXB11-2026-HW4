/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() {
  using namespace homework;

  // as1
  int x = 9;
  float y = 3.74f;
  int add_one = x;

  printHello();
  AddOneRef(add_one);

  std::cout << "AddOneRef(" << x << "): " << add_one << std::endl;
  std::cout << "isOdd(" << x << "): " << isOdd(x) << std::endl;
  std::cout << "floatToInt(" << y << "): " << floatToInt(y) << std::endl;
  std::cout << "factorial(" << x << "): " << factorial(x) << std::endl;

  // as2
  Foo foo;
  std::cout << "as2" << std::endl;
  std::cout << "bar(): " << foo.bar() << std::endl;
  std::cout << "baz(): " << foo.baz() << std::endl;
  std::cout << "quux(): {" << foo.quux()[0] << "," << foo.quux()[1] << "," << foo.quux()[2] << "}" << std::endl;

  fVector2D a(2.0, 4.0);
  fVector2D b(3.0, 4.0);
  fVector2D c = a + b;
  fVector2D expected(5.0, 8.00);
  

  std::cout << "a + b = c: " << (c == expected) << std::endl;
  std::cout << "a==b: " << (a == b) << std::endl; 

  //as3
  Apple apple(Color::green);

  std::cout << "as3" << std::endl;
  std::cout << apple.getName() << std::endl;
  if (apple.getColor() == Color::red) {
    std::cout << "red" << std::endl;
  }
  else if (apple.getColor() == Color::green) {
    std::cout << "green" << std::endl;
  }
  else {
    std::cout << "yellow" << std::endl;
  }
  std::cout << apple.getTaste() << std::endl;
}

