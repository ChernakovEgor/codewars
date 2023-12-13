#include <iostream>
#include <string>

std::string bool_to_word(bool value) {
  if (value)
    return "Yes";
  else
    return "No";
}

int main() {
  std::cout << bool_to_word(false);
  return 0;
}
