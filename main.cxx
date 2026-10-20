/** Use this main to test exercises. See the example with 'as1.0' below.
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>
#include <string>
#include <vector>

int failures = 0;

void check(const std::string &name, bool ok) {
  std::cout << (ok ? "[PASS] " : "[FAIL] ") << name << '\n';
  if (!ok) {
    ++failures;
  }
}

int main() {
  // Example for as1.0
  homework::printHello();

  int a = 5;
  homework::AddOneRef(a);
  check("1.1 AddOneRef(5) gives 6", a == 6);

  check("1.2 isOdd(3) is true", homework::isOdd(3));
  check("1.2 isOdd(4) is false", !homework::isOdd(4));
  check("1.2 isOdd(-3) is true", homework::isOdd(-3));

  check("1.3 floatToInt(3.7) is 3", homework::floatToInt(3.7f) == 3);
  check("1.3 floatToInt(-2.9) is -2", homework::floatToInt(-2.9f) == -2);

  check("1.4 factorial(0) is 1", homework::factorial(0) == 1);
  check("1.4 factorial(5) is 120", homework::factorial(5) == 120);
  check("1.4 factorial(-3) is -1", homework::factorial(-3) == -1);

  homework::Foo foo;
  check("2.1 bar() is 42", foo.bar() == 42);
  check("2.1 baz() is 3.14", foo.baz() == 3.14f);
  check("2.1 baz() sets x to 2.71", foo.x == 2.71f);
  check("2.1 quux() is {1, 2, 3}",
        foo.quux() == std::vector<double>{1.0, 2.0, 3.0});

  homework::fVector2D v1(1.0f, 2.0f);
  homework::fVector2D v2(3.0f, 4.0f);
  check("2.2 (1,2) + (3,4) is (4,6)",
        v1 + v2 == homework::fVector2D(4.0f, 6.0f));
  check("2.2 (1,2) == (1,2)", v1 == homework::fVector2D(1.0f, 2.0f));
  check("2.2 (1,2) is not (3,4)", !(v1 == v2));

  homework::Apple apple(homework::Color::red);
  check("3.1 name is apple", apple.getName() == "apple");
  check("3.1 color is red", apple.getColor() == homework::Color::red);
  check("3.1 taste is sweet", apple.getTaste() == "sweet");
  const homework::Fruit &fruit = apple;
  check("3.1 getTaste via Fruit reference", fruit.getTaste() == "sweet");

  if (failures == 0) {
    std::cout << "All checks passed\n";
  } else {
    std::cout << failures << " check(s) FAILED\n";
  }
  return failures == 0 ? 0 : 1;
}