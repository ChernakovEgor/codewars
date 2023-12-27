#include <vector>

int findOdd(const std::vector<int>& numbers) {
  for (auto number : numbers) {
    int occurences = std::count(numbers.begin(), numbers.end(), number);
    if (occurences % 2 != 0) return number;
  }
  return 0;
}
