#include <cstdint>
#include <iostream>
#include <string>

// binary algorithm
std::string add_binary(uint64_t a, uint64_t b) {
  if (a == 0 && b == 0) return "0";
  std::string res = "";
  uint64_t sum = a + b;
  while (sum > 0) {
    res = std::to_string(sum % 2) + res;
    sum /= 2;
  }
  return res;
}

// format
std::string add_binary_easy(uint64_t a, uint64_t b) { return ""; }

int main() {
  std::cout << add_binary(6, 3);
  return 0;
}
