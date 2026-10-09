#include "as3.hpp"

namespace homework {


Fruit::Fruit(std::string name, Color color)
    : _name(name), _color(color) {}

std::string Fruit::getName() const 
{
    return _name;
}

Color Fruit::getColor() const 
{
    return _color;
}

Apple::Apple(Color color)
    : Fruit("apple", color) {}

std::string Apple::getTaste() const 
{
    return "sweet";
}


} // namespace homework
