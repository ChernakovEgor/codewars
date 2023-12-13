#include <iostream>
#include <string>

// string addition
std::string removeExclamationMarks(std::string str) {
  std::string res;
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] != '!') {
      res += str[i];
    }
  }
  return res;
}

int main() {
  std::cout << removeExclamationMarks("Hello!!! Worl!d!");
  return 0;
}
