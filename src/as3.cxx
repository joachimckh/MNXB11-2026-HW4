#include "as3.hpp"

namespace homework {

    //(a)

        //Fruit(const std::string& name , Color color) : name(name), color(color){}
    std::string Fruit::getName() const{
        return name;
    }
    Color Fruit::getColor() const{
        return color;
    }

        //virtual std::string getTaste() const = 0;


        //Apple(Color color) : Fruit("apple", color){}
    std::string Apple::getTaste() const{
        return "sweet";
    }


//(b)



} // namespace homework

