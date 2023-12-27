#include <algorithm>
#include <string>

bool isAnagram(std::string test, std::string original) {
  if (test.size() != original.size()) return false;
  for (unsigned long i = 0; i < original.size(); i++) {
    original[i] = std::tolower(original[i]);
    test[i] = std::tolower(test[i]);
  }
  std::sort(original.begin(), original.end());
  std::sort(test.begin(), test.end());
  return test == original;
}
