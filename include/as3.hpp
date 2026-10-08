#pragma once

#include <string>

namespace homework {
// Hint: Lecture 5 slides
// Use lower case letters for all string values in this assignment

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow: make sure to use lower case letters for the colors


enum Color 
    // defines a fixed set of named constants which are not saved as strings 
{
    red,
    green,
    yellow
};

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string

class Fruit
{
public:
    // we define the fruit of class fruit as something with two variables, a string and of enum color color
    Fruit(std::string name, Color color); 


    // mention the value coming out of the funtion is a string 
    std::string getName(); 
     // we dont have to mention the string because it is not a string, it is inside the enum
    Color getColor(); 

    // you need to assgin a string to it for it to have any meaning but it exists 
    virtual std::string getTaste() = 0;
    
//these have to be defined 
private: 
    std::string name_;
    Color color_;
};

// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor

// we have a class apple as a member of the class fruit
class Apple : public Fruit 

{
public:
    //now of the class the constructor is taking color as an argument 
    Apple(Color color);
    // of this class it has a taste which will later be defined 
    std::string getTaste();
};


} // namespace homework