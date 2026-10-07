/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

int main() {  
  // Example for as1.0
  //homework::printHello();

  //  1.1
  /*
  int x = 2;
  homework::AddOneRef(x);
  */
 
  /*
  // 1.2
  int y = 2;
  int z = 3;
  std::cout << homework::isOdd(y) << std::endl;
  std::cout << homework::isOdd(z) << std::endl;
  */
 /*
  //1.3
  float d = 4.2;
  std::cout << homework::floatToInt(d) << std::endl;
  
  //1.4
  int e = 5;
  std::cout << homework::factorial(e) << std::endl;

  // 2.1
  homework::Foo FooTest;


  std::cout << FooTest.bar() << std::endl;
  std::cout << FooTest.baz() << std::endl;
  std::cout << FooTest.x << std::endl;
  std::vector<double> quux = FooTest.quux();
  for (double i : quux)
  {
    std::cout << i << " ";
  }
  */
  //2.2
  homework::fVector2D v1(1.5f, 2.5f);
  homework::fVector2D v2(3.0f, 4.0f);
  homework::fVector2D v3(4.5f, 6.5f);
  homework::fVector2D v4(1.5f, 2.5f);

  homework::fVector2D sum = (v1 + v2);
  
  std::cout << (sum == v3) << std::endl;
  std::cout << (sum == v4) << std::endl;
}

