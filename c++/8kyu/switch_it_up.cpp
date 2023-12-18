#include <iostream>
#include <string>

std::string switch_it_up(int number) {
  switch (number) {
    case 0:
      return "Zero";
    case 1:
      return "One";
    case 2:
      return "Two";
    case 3:
      return "Three";
    case 4:
      return "Four";
    case 5:
      return "Five";
    case 6:
      return "Six";
    case 7:
      return "Seven";
    case 8:
      return "Eight";
    case 9:
      return "Nine";
    default:
      return "Error";
  }
}

std::string easy(int number) {
  std::string numbers[10] = {"Zero", "One", "Two",   "Three", "Four",
                             "Five", "Six", "Seven", "Eight", "Nine"};
  return numbers[number];
}

int main() {
  std::cout << switch_it_up(4);
  return 0;
}
