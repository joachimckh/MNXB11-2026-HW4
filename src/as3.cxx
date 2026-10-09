#include "as3.hpp"

namespace homework {

    //(a)
    enum class Color { 
        red, 
        green,
        yellow,
    };

    class Fruit {
        private:
        std::string name;
        Color color;

        public:
        Fruit(const std::string& name , Color color) : name(name), color(color){}
        std::string getName() const{
            return name;
        }
        Color getColor() const{
            return color;
        }

        virtual std::string getTaste() const = 0;

    };

    class Apple : public Fruit {
        public: 
        Apple(Color color) : Fruit("apple", color){}
        std::string getTaste() const{
            return "sweet";
        }
    };

//(b)



} // namespace homework

