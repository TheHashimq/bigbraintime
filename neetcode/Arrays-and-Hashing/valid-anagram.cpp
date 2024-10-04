#include <algorithm>
#include <iostream>

class Solution {
public:
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
};
