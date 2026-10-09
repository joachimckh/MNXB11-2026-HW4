#include "as3.hpp"

namespace homework {

Fruit::Fruit(std::string n, Color colour) {
    name = n;
    color = colour;
}

std::string Fruit::getName() {
    return name;
}

Color Fruit::getColor() {
    return color;
}

Apple::Apple(Color color) : Fruit("apple", color) {}

std::string Apple::getTaste() {
    return "sweet";
}

} // namespace homework

