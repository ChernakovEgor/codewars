#include <string>

int find_short(std::string str) {
  int shortest = 10000;
  int curr_length = 0;
  for (unsigned long i = 0; i < str.length(); i++) {
    if (str[i] != ' ')
      curr_length++;
    else {
      if (curr_length < shortest) shortest = curr_length;
      curr_length = 0;
    }
  }
  if (curr_length < shortest) shortest = curr_length;
  return shortest;
}
