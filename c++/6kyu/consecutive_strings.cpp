#include <string>
#include <vector>

class LongestConsec {
 public:
  static std::string longestConsec(const std::vector<std::string> &strarr,
                                   int k);
};

std::string LongestConsec::longestConsec(const std::vector<std::string> &strarr,
                                         int k) {
  if (strarr.size() == 0 || k <= 0 || k > strarr.size()) return "";
  unsigned long longest = strarr[0].size();
  unsigned long index = 0;
  for (unsigned long i = 0; i < strarr.size() - k + 1; i++) {
    unsigned long sum = 0;
    for (unsigned long j = i; j < i + k; j++) {
      sum += strarr[j].size();
    }

    if (sum > longest) {
      longest = sum;
      index = i;
    }
  }

  std::string result = "";
  for (unsigned long i = index; i < index + k; i++) {
    result += strarr[i];
  }
  return result;
}

int main() { return 0; }
