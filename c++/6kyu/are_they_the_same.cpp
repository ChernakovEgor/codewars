#include <algorithm>
#include <vector>

class Same {
 public:
  static bool comp(std::vector<int>& a, std::vector<int>& b) {
    if (a.size() == 0) return false;
    for (unsigned long i = 0; i < a.size(); i++) {
      a[i] *= a[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for (unsigned long i = 0; i < a.size(); i++) {
      // if (b[i] != a[i]) return false;
      if (std::find(a.begin(), a.end(), b[i]) == a.end()) return false;
    }
    return true;
  }
};
