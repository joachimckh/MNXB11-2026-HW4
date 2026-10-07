#include "as3.hpp"

namespace homework {
//inside the class we defined we have two variables, one of which is a string, the other is a color of the defined enum 
Fruit::Fruit(std::string name, Color color) 

//define the member variable and the parameter as being linked 
{
    name_ = name; 
    color_ = color;
}


// of class fruit use function getname which is a string 
std::string Fruit::getName() 
// say the name 
        { return name_; }  

// of class fruite use the function getcolor which shows the color
Color Fruit::getColor()  
        { return color_; }


//apple as function of apple 
Apple::Apple(Color color)
    // of class fruit define the fruit apple wich has some colour
    : Fruit("apple", color)
{
}

//of the class apple we use the taste function which will give a string sweet 
std::string Apple::getTaste()
{
    return "sweet";
}

} // namespace homework
