/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <vector>

int main() { 

  //as3.1
  homework::Apple gala(homework::Color::red);
  std::cout<< gala.getName() <<std::endl;
  std::cout<< gala.getTaste() << std::endl;
  if (gala.getColor()==homework::Color::red){
    std::cout << "red"<< std::endl;
  }

  //as2.1
  homework::Foo object; 
  std::cout << object.bar() << std::endl;
  std::cout << object.baz() << std::endl;
  std::cout << object.x << std::endl;
  for(double x : object.quux()){
  std::cout << x << std::endl;}

  //as2.2
  float x1, y1, x2, y2;
  std::cout << "Enter x1, y1, x2, y2 for two vectors a(x1, y1) and b(x2, y2)" << std::endl;
  std::cin >> x1 >> y1 >> x2 >> y2;

  homework::fVector2D a(x1, y1), b(x2, y2);
  homework::fVector2D c = a + b;
  homework::fVector2D ans(x1+x2, y1+y2);
  if(c == ans){std::cout << "overloaded operator + works" << std::endl;}
  else {std::cout << "unsuccessful" << std::endl;}
  std::cout << "equal?" << (a == b) << std::endl;

  // Example for as1.0
  homework::printHello();

  //as1.1
  int integer ;
  std::cout << "input an integer" << std::endl;
  std::cin >> integer;
  homework:: AddOneRef(integer);
  std::cout << "added one = " << integer << std::endl;

  //as1.2
  int number;
  std::cout << "input a number" << std::endl;
  std::cin >> number;
  std::cout << homework::isOdd(number) << std::endl;

  //as1.3
  float decimal;
  std::cout << "input a decimal" << std::endl;
  std::cin >> decimal;
  std::cout << homework::floatToInt(decimal) << std::endl;

  //as1.4
  int x;
  std::cout << "input a positive or negative number" << std::endl;
  std::cin >> x;
  std::cout << homework::factorial(x) << std::endl;

}

