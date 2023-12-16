#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// vectors and streams
std::vector<std::string> number(const std::vector<std::string> &lines) {
  std::vector<std::string> result;
  for (unsigned long i = 0; i < lines.size(); i++) {
    std::string new_line;
    new_line = std::to_string(i + 1) + ": " + lines[i];
    result.push_back(new_line);
    std::cout << new_line;
  }
  return result;
}

int main() {
  std::vector<std::string> v;
  v.push_back("abc");
  v.push_back("456");
  v.push_back("123");
  std::stringstream str;
  str << "abc " << std::to_string(123);
  std::cout << str.str();
  number(v);
  return 0;
}
