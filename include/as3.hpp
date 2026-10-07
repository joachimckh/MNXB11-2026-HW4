#pragma once

#include <string>

namespace homework {
// Hint: Lecture 5 slides
// Use lower case letters for all string values in this assignment

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow: make sure to use lower case letters for the colors

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string

// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor

enum class Color { red, green, yellow };

class Fruit {
public:
  Fruit(std::string name, Color color);
  virtual ~Fruit() = default;
  std::string getName() const;
  Color getColor() const;
  virtual std::string getTaste() const = 0;

private:
  std::string name_;
  Color color_;
};

class Apple : public Fruit {
public:
  Apple(Color color);
  std::string getTaste() const override;
};

} // namespace homework
