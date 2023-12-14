#include <iostream>
#include <string>
using namespace std;

std::string no_space(const std::string& x) {
  string result = "";
  for (int i = 0; i < x.length(); i++) {
    if (x[i] != ' ') result += x[i];
  }
  return result;
}

int main() {
  std::cout << no_space("5 years old enjoy");

  string test = "5 years old enjoy";
  return 0;
}
