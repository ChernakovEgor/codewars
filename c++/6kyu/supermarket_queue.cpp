#include <algorithm>
#include <numeric>
#include <vector>

// sort, accumulate

long queueTimeOptimized(std::vector<int> customers, int n) {
  std::vector<long> times(n);
  std::fill(times.begin(), times.end(), 0);
  std::sort(customers.begin(), customers.end(), std::greater<>());

  for (unsigned long i = 0; i < customers.size(); i++) {
    auto min_iterator = std::min_element(times.begin(), times.end());
    unsigned long min_index = std::distance(times.begin(), min_iterator);
    times[min_index] += customers[i];
  }
  return *std::max_element(times.begin(), times.end());
}

long queueTime(std::vector<int> customers, int n) {
  std::vector<long> times(n, 0);
  // std::fill(times.begin(), times.end(), 0);

  for (unsigned long i = 0; i < customers.size(); i++) {
    auto min_iterator = std::min_element(times.begin(), times.end());
    unsigned long min_index = std::distance(times.begin(), min_iterator);
    times[min_index] += customers[i];
  }
  return *std::max_element(times.begin(), times.end());
}
