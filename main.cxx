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
  int a=1;
  float b=3.15;
  int c = 3;
  homework::printHello();
  std::cout << "\n";
  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";
  std::cout << "c: " << c << "\n";
  homework::AddOneRef(a);
  std::cout << "After AddOneRef(a) --> a: " << a << "\n";
  std::cout << "homework::isOdd(a): " << homework::isOdd(a) << "\n";
  std::cout << "homework::floatToInt(b): " << homework::floatToInt(b) << "\n";
  std::cout << "homework::factorial(c): " << homework::factorial(c) << "\n";

  //as2
  homework::Foo foo;
  std::cout << "\n";
  std::cout << "foo.bar: " << foo.bar() << "\n";
  std::cout << "foo.baz: " << foo.baz() << "\n";
  std::cout << "foo.x: " << foo.x << "\n";

  std::vector<double> vec =  foo.quux();
  std::cout << "foo.quux: ";
  for (double i : vec) {
      std::cout << i << " ";
  }
  std::cout << "\n";
  homework::fVector2D v1(1.0, 2.0);
  homework::fVector2D v2(2.0, 4.0);
  homework::fVector2D v3(1.0, 2.0);
 
  homework::fVector2D v_sum = v1 + v3;
  std::cout << "v1 == v2: " << (v1 == v2) << "\n";
  std::cout << "v1 == v3: " << (v1 == v3) << "\n";
  std::cout << "v2 == v3: " << (v2 == v3) << "\n";
  std::cout << "v_sum == v2: " << (v_sum == v2) << "\n";

  //as3
  std::cout << "\n";
  homework::Apple apple(homework::Color::red);
  std::cout << "apple.getname(): " << apple.getName() << "\n";
  std::cout << "apple.getTaste(): " << apple.getTaste() << "\n";
  std::cout << "(apple.getColor() == homework::Color::red): " << (apple.getColor() == homework::Color::red) << "\n";

  return 0;
}

