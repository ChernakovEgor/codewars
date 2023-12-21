#include <string>
#include <vector>

int countSmileys(std::vector<std::string> arr) {
  int count = 0;
  for (unsigned long i = 0; i < arr.size(); i++) {
    if (arr[i].length() == 2 && ((arr[i][0] == ':' || arr[i][0] == ';') &&
                                 (arr[i][1] == ')' || arr[i][1] == 'D')))
      count++;
    if (arr[i].length() == 3 && ((arr[i][0] == ':' || arr[i][0] == ';') &&
                                 (arr[i][1] == '-' || arr[i][1] == '~') &&
                                 (arr[i][2] == ')' || arr[i][2] == 'D')))
      count++;
  }
  return count;
}
