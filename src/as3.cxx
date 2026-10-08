#include "as3.hpp"

namespace homework {

Fruit::Fruit(const std::string& name, Color color )
    : name_(name), color_(color){}

std::string Fruit::getName(){
    return name_;
}

Color Fruit::getColor(){
    return color_ ;
}

Apple::Apple(Color color)
    : Fruit("apple", color){}


std::string Apple::getTaste() {
    return "sweet";
}




} // namespace homework

