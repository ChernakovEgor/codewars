#include <iostream>
#include <string>
using namespace std;

// reversed string
string reverseString(string str) {
  reverse(str.begin(), str.end());
  return str;
}

int main() {
  std::cout << reverseString("enjoy");
  return 0;
}
