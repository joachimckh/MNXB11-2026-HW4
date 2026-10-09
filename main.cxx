/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 

  std::cout << "Testing as1.0" << std::endl;
  homework::printHello();

  std::cout << "Testing as1.1" << std::endl;
  int x = 1;
  homework::AddOneRef(x);
  std::cout << "Result: " << x << std::endl;

  std::cout << "Testing as1.2" << std::endl;
  std::cout << "isOdd(3): " << homework::isOdd(3) << std::endl;
  std::cout << "isOdd(4): " << homework::isOdd(4) << std::endl;
  std::cout << "isOdd(-3): " << homework::isOdd(-3) << std::endl;
  std::cout << "isOdd(-4): " << homework::isOdd(-4) << std::endl;

  std::cout << "Testing as1.3" << std::endl;
  std::cout << "floatToInt(3.14f): " << homework::floatToInt(3.14f) << std::endl;
  std::cout << "floatToInt(-3.14f): " << homework::floatToInt(-3.14f) << std::endl; 

  std::cout << "Testing as1.4" << std::endl;
  std::cout << "factorial(0): " << homework::factorial(0) << std::endl;
  std::cout << "factorial(1): " << homework::factorial(1) << std::endl;
  std::cout << "factorial(5): " << homework::factorial(5) << std::endl;
  std::cout << "factorial(-1): " << homework::factorial(-1) << std::endl;

}

