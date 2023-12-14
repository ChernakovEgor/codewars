#include <iostream>
#include <string>
using namespace std;

// char to int
int get_age(const std::string& she_said) { return she_said.at(0) - '0'; }

int main() {
  std::cout << get_age("5 years old enjoy");
  return 0;
}
