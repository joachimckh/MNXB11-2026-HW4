#include "as1.hpp"

namespace homework {

    //prints hello 
    void printHello() 
        {
             std::cout << "Hello, World!" << std::endl; 
        }

    void printDone ()
        {
            std::cout << "1.0 is done!" << std::endl; 
        }

    // adds 1 to x 
   int AddOneRef(int& x)
    {
    x += 1;
    return x;
    }

    // checks the remainder when devided by 2. if 0 = true, 1 = false using bool 
    bool isOdd(int x) 
        { return x % 2 != 0;}

    //converts value type from float to integer 
    int floatToInt(float x) 
        { return static_cast<int>(x); }

    // a recursive function in c is a function that calls itself 
    // uses and if else statement that if lower than zero = -1, if 0 =1 and if >0 then the factorial is calculated 
    int factorial(int n) 
    {    
        if (n < 0)
            { return -1; }
                else if (n == 0)
                { return 1; }
        else
            { return (n * factorial(n - 1)); }
    }

}; // namespace homework