#include "as2.hpp"
#include <vector>

namespace homework {

int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  x = 2.71f;
  return 3.14;
}

std::vector<double> Foo::quux() {
  std::vector<double> values = {1.0, 2.0, 3.0};
  return values;
}

// I changed the class itself in the .hpp header for the second part.

fVector2D a(1.0f, 2.0f);
fVector2D b(3.0f, 4.0f);

fVector2D c = a + b;
bool equal = (a == b);

} // namespace homework
