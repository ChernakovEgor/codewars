#include <cmath>
#include <iostream>
#include <vector>

// power of two
std::vector<uint64_t> powers_of_two(int n) {
  std::vector<uint64_t> result;
  for (int i = 0; i < n; i++) {
    result.push_back(std::pow(2, i));
  }
  return result;
}

int main() {
  powers_of_two(4);
  return 0;
}
