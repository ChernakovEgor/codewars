#include <iostream>

// to upper & lower string
std::string to_alternating_case(const std::string& str) {
  std::string res = "";
  for (unsigned long i = 0; i < str.length(); i++) {
    res += std::islower(str[i]) ? std::toupper(str[i]) : std::tolower(str[i]);
  }
  return res;
}

std::string to_alternating_case_dumb(const std::string& str) {
  std::string res = "";
  for (unsigned long i = 0; i < str.length(); i++) {
    if (str[i] >= 65 && str[i] <= 90)
      res += str[i] + 32;
    else if (str[i] >= 97 && str[i] <= 122)
      res += str[i] - 32;
    else
      res += str[i];
  }
  return res;
}

int main() {
  std::cout << to_alternating_case("AbcDeF");
  return 0;
}
