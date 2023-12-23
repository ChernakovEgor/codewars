#include <string>
#include <vector>

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  std::vector<T> result;
  if (iterable.size() == 0) return result;
  char current = iterable[0];
  result.push_back(current);
  for (unsigned long i = 1; i < iterable.size(); i++) {
    if (iterable[i] != current) {
      current = iterable[i];
      result.push_back(current);
    }
  }
  return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
  std::vector<char> result;
  char current = iterable[0];
  result.push_back(current);
  for (unsigned long i = 1; i < iterable.size(); i++) {
    if (iterable[i] != current) {
      current = iterable[i];
      result.push_back(current);
    }
  }
  return result;
}
