#include "as1.hpp"
#include <cmath>
#include <limits>
namespace homework {

void printHello() 
{ 
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) 
{ 
    x++;
}

bool isOdd(int x) 
{
    if (x%2 == 0)
     return false; 
    else return true;
}

// I really hope this is unnecessary caution on my part, but this is C++;
// "C++ made shooting yourself in the foot harder than in C,
//  but when you do you blow your entire foot off" --some famous programmer I forgot the name of.
int floatToInt(float x) 
{ 
// Can't check the limits of float with a float type since trying to add -1 or +1
// out of bounds definitionally, so I have to do this ugly mess. 
// GPT helped here with the -1 and +1.
// I just realised this is technically far more than was expected.
// Should have checked the test files first...
    double temp = static_cast<double>(x);
    if (std::isfinite(x) == false ||
        temp <= static_cast<double>(std::numeric_limits<int>::min()) - 1 ||
        temp >= static_cast<double>(std::numeric_limits<int>::max()) + 1
       ) 
        {
            throw std::out_of_range(
                "Cannot convert values out of float range, NaN values or infinite values.");
        }
    else
        {
            int y = static_cast<int>(x);
            return y;
        }
}

// This is such a trap question, lmao.
// I have to make sure n is nonnegative
// and that the result is stil valid int.
int factorial(int n) { 
    if (n < 0 || n > 12) 
    { 
        return n;
    }
    if (n == 0) return 1;
    else 
    {
    int aux{1};
    
    for (int i = 1; i <= n ; i++)
    {
        aux = aux * i;
    } 
    return aux;
    }
}


}; // namespace homework
