#include <iostream>

int quarter_of(int month) {
  if (month <= 3)
    return 1;
  else if (month <= 6)
    return 2;
  else if (month <= 9)
    return 3;
  else
    return 4;
}

int main() {
  std::cout << quarter_of(3);
  return 0;
}
