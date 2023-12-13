#include <iostream>
#include <string>

// ternary operator
std::string bool_to_word(bool value) { return value ? "Yes" : "No"; }

int main() {
  std::cout << bool_to_word(false);
  return 0;
}
