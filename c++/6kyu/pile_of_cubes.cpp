#include <cmath>
#include <iostream>

// pow does not work with long long numbers
//
class ASum {
 public:
  static long long findNb(long long m);
};

long long ASum::findNb(long long m) {
  long long sum = 0;
  long long num = 1;
  long long power = 3;
  while (sum < m) {
    // sum += std::pow(num, power);
    sum += num * num * num;
    if (sum == m) return num;
    num++;
  }
  return -1;
}

int main() {
  std::cout << ASum::findNb(1025292944081385001);
  return 0;
}
