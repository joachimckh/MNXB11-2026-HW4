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

  // adding one to number
  int num = 1;
  homework::AddOneRef (num);
  std::cout << num << std::endl;

  // if odd then true 
  if ( homework::isOdd (3))
    std::cout << "true" << std::endl;

  else 
    std::cout << "false" << std::endl;

  
  //float to interger 
   float f = -3.14f;
   int i = homework::floatToInt (f);
   std::cout << i << std::endl;

  //factorial 
  std::cout << homework::factorial(0) << std::endl;



  // as2 exercises

  
    homework::Foo foo;

    std::cout << foo.bar() << std::endl;
    std::cout << foo.baz() << std::endl;

    std::vector<double> result = foo.quux();
    for (const auto& val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    homework::fVector2D vec;

    
    
    // as3 exercises

    //enum class
    homework::Color myColor = homework::Color::red;


    homework::Apple apple(homework::Color::red);
    std::cout << apple.getName() << std::endl;
    std::cout << static_cast<int>(apple.getColor()) << std::endl;
    std::cout << apple.getTaste() << std::endl;

  return 0;

}

