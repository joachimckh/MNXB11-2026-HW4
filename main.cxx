//MAIN 
#include "as1.hpp" 
#include "as2.hpp"
#include "as3.hpp"

#include <iostream>

using namespace homework;

int main () {
    //Assignment 1.0 
        //Print Hello World 
        homework::printHello();
        homework::printDone();
    
         
    //Assignment 1.1 
        // Add one starting from initial value 3 and 
        int i{3};
        i = AddOneRef(i); 

        std::cout << i << std::endl; 

        
        std::cout << " 1.1 is done!" << std::endl;

    //Assignment 1.2 
        // check if even or odd for 5 and 4 
        std::cout << isOdd(5) << std::endl;
        std::cout << isOdd(4) << std::endl;

        std::cout << " 1.2 is done!" << std::endl;

    //Assignment 1.3 
        // float to integer, define 5.7 as float and print 
        float x = 5.7f;
        std::cout << floatToInt(x) << std::endl; 

        std::cout << " 1.3 is done!" << std::endl;

    //Assigment 1.4 factorial function
        // calculates the facotorial of a positive number a negative number and 0 
        std::cout << factorial(7) << std::endl;
        std::cout << factorial(0) << std::endl;
        std::cout << factorial(-12) << std::endl;

        std::cout << " 1.4 is done!" << std::endl;

    // Assignment 2.0 
        //foo as subject of type Foo
        Foo foo; 

    //part 1     
        //calls foo on bar 
        std::cout << foo.bar() << std::endl;  

    //part 2 
        //calls foo on baz and shows value of x 
        std::cout << foo.baz() << std::endl;  
        std::cout << "x = " << foo.x << std::endl;  

    //part 3 
        //look at vector with a significance of 2 and name every number number 
        std::vector<double> numbers = foo.quux();
        for (double number : numbers) 
        std::cout << number << " " << std::endl; 

        std::cout << "2.0 is done " << std::endl;

    
    // Assignment 2.1 
        // define fectors a and b with all parameters as floats 
        fVector2D a(2.0f, 3.0f);
        fVector2D b(4.0f, 5.0f);

        // use an if statement to show equality 
        if (a == b)
            {std::cout << "Vectors are equal" << std::endl;}
            else
                {std::cout << "Vectors are not equal" << std::endl;}

        std::cout << "2.1 is done " << std::endl;

    //Assigment 3 

        //assign something from the enum to the function 
        Apple apple(Color::red);

        //use the functions of the class and show the definition of the varibles 
        std::cout << apple.getName() << std::endl;
        std::cout << apple.getTaste() << std::endl;

        std::cout << "3 is done " << std::endl;
        std::cout << "Homework has run to completion" << std::endl;

}
