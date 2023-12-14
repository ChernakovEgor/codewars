#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr[10]) {
  std::string result = "";
  result = "(...) ...-....";
  for (int i = 0, j = 0; i < result.length(); i++) {
    if (result[i] == '.') {
      result[i] = arr[j++] + '0';
    }
  }
  return result;
}

int main() {
  int r[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  std::cout << createPhoneNumber(r);
  return 0;
}
