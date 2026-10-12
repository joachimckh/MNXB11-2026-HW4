/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() { 
  // as1.0
  homework::printHello();

  //as1.1
  int x=2; 
  homework::AddOneRef(x); 
  std::cout << "After function AddOneRef:" << x << std::endl;

  //as1.2
  std::cout << std::boolalpha;
  std::cout << "is " << x << " odd?" << "\n" << homework::isOdd(x) << std::endl; 

  //as1.3
  float f = 3.14;
  std::cout << "floatToInt:" << homework::floatToInt(f) << std::endl;

  //as1.4
  int n = 4;
  std::cout << n << "! = " << homework::factorial(n) << std::endl;

  //as2
  homework::Foo foo;
  //as2.0
  std::cout << "bar: " << foo.bar() << std::endl;

  //as2.1
  std::cout << "baz: " << foo.baz() << std::endl;
  std::cout << "x: " << foo.x << std::endl;

  //as2.2
  std::vector<double> values = foo.quux();

  std::cout << "quux: ";
  for (double value : values)
  {
      std::cout << value << " ";
  }
  std::cout << std::endl;

  //as2.3
  homework::fVector2D a(2.0f, 3.0f);
  homework::fVector2D b(4.0f, 5.0f);

  homework::fVector2D c = a + b;
  homework::fVector2D expected(6.0f, 8.0f);

  std::cout << std::boolalpha;
  std::cout << "Addition: " << (c == expected) << std::endl;
  std::cout << "a == b ? " << (a == b) << std::endl;
  std::cout << "a == a ? " << (a == a) << std::endl;

  //as3
  homework::Apple apple(homework::Color::red);

    //test name
    std::cout << "Name: " << apple.getName() << std::endl;

    //test color
    homework::Color color = apple.getColor();

    if (color == homework::Color::red)
    {
        std::cout << "Color: red" << std::endl;
    }

    //test taste
    std::cout << "Taste: " << apple.getTaste() << std::endl;

    return 0;

}

