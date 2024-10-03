#include <algorithm>
#include <iostream>

bool isAnagram(std::string s, std::string t);

int main() {
  std::string s = "racecar";
  std::string t = "carrtce";

  if (isAnagram(s, t)) {
    std::cout << "Strings " << s << " " << t << " are anagram" << std::endl;
  } else {
    std::cout << "String " << s << " " << t << " are not anagram" << std::endl;
  }
  return 0;
}

bool isAnagram(std::string s, std::string t) {
  if (s.size() != t.size()) {
    return false;
  }
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[i]) {
      return false;
    } else {
      continue;
    }
  }
  return true;
}
