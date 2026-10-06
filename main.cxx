/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();

  // adding one to number
  int num = 10;
  homework::AddOneRef (num);
  std::cout << num << std::endl;

  // if odd then true 
  if ( homework::isOdd (num))
    std::cout << "true" << std::endl;

  else 
    std::cout << "false" << std::endl;

  
  //float to interger 
   float f = 3.8f;
   int i = homework::floatToInt (f);
   std::cout << i << std::endl;

  //factorial 
  std::cout << homework::factorial(num) << std::endl;

  return 0;

}

