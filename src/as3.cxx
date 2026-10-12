#include "as3.hpp"

namespace homework 
{
    Fruit::Fruit(std::string name, Color color)
    : name(name), color(color)
    {
    }

    std::string Fruit::getName() const
    {
        return name;
    }

    Color Fruit::getColor() const
    {
        return color;
    }



} // namespace homework

