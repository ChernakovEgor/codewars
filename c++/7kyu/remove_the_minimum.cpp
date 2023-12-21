#include <iostream>
#include <vector>

// min erase

std::vector<unsigned int> removeSmallest(
    const std::vector<unsigned int>& numbers) {
  if (numbers.size() == 0) return {};
  std::vector<unsigned> result = numbers;
  auto min = std::min_element(result.begin(), result.end());
  result.erase(min);
  return result;
}

std::vector<unsigned int> removeSmallestDumb(
    const std::vector<unsigned int>& numbers) {
  if (numbers.size() == 0) return {};

  unsigned long lowest = 0;
  unsigned int min = numbers[0];
  for (unsigned long i = 0; i < numbers.size(); i++) {
    if (numbers[i] < min) {
      min = numbers[i];
      lowest = i;
    }
  }

  // std::cout << lowest;

  // std::vector<unsigned int> result(numbers.size() - 1);
  std::vector<unsigned int> result;
  // std::copy(numbers.begin(), numbers.begin() + lowest, result.end());
  // std::copy(numbers.begin() + lowest + 1, numbers.end(), result.end());
  for (unsigned long i = 0; i < numbers.size(); i++) {
    if (lowest != i) {
      result.push_back(numbers[i]);
    }
  }

  return result;
}

int main() {
  std::vector<unsigned int> v = {5, 4, 1, 2, 3};
  auto res = removeSmallest(v);
  return 0;
}
