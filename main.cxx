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

  // Exercise 1.1
  int number = 5;
  std::cout << "Before: " << number << std::endl;
  homework::AddOneRef(number);
  std::cout << "After: " << number << '\n' << std::endl;

  // Exercise 1.2
  int oddNumber = 7;
  int evenNumber = 8;
  std::cout << oddNumber << " is odd? " << std::boolalpha << homework::isOdd(oddNumber) << '\n';
  std::cout << evenNumber << " is odd? " << std::boolalpha << homework::isOdd(evenNumber) << '\n' << std::endl;

  // Exercise 1.3
  float floatValue = 3.14;
  int intValue = homework::floatToInt(floatValue);
  std::cout << floatValue << " as an integer is: " << intValue << '\n' << std::endl;

  // Exercise 1.4
  int factorialInput = 5;
  int factorialResult = homework::factorial(factorialInput);
  std::cout << "Factorial of " << factorialInput << " is: " << factorialResult << std::endl;


  // Exercise 2.1
  homework::Foo foo;
  std::cout << "Foo::bar() returns: " << foo.bar() << std::endl;

  std::cout << "Foo::baz() returns: " << foo.baz() << " and sets x to: " << foo.x << std::endl;
  std::cout << "Foo::quux() returns: " << foo.quux()[0] << foo.quux()[1] << foo.quux()[2] << std::endl;

  // Exercise 2.2
  homework::fVector2D v1(1.0, 2.0);
  homework::fVector2D v2(3.0, 4.0);
  homework::fVector2D v3 = v1 + v2;

  std::cout << "Is sum corret? " << std::boolalpha << (v3 == homework::fVector2D(4.0, 6.0)) << std::endl;

  // Exercise 3.1
  homework::Apple apple(homework::Color::red);
  std::cout << apple.getName() << '\n';  // apple
  std::cout << apple.getTaste() << '\n'; // sweet
}