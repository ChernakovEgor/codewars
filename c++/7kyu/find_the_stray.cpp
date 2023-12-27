#include <algorithm>
#include <vector>

int stray(std::vector<int> numbers) {
  int numb = numbers[0];
  int other;
  int count = 0;
  for (int number : numbers) {
    if (numb == number)
      count++;
    else
      other = number;
  }
  return count > 1 ? other : numb;
};
