#include <iostream>

int divisors(int n) {
  int count = 1;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0) count++;
  }
  return count;
}

int main() {
  std::cout << divisors(4);
  return 0;
}
