#include <numeric>
#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
  int min = *std::min_element(nums.begin(), nums.end());
  int max = *std::max_element(nums.begin(), nums.end());
  std::vector<int> result(max - min + 1);
  std::iota(result.begin(), result.end(), min);
  return result;
}
