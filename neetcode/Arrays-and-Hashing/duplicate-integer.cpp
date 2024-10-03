#include <set>
#include <vector>
class Solution {
public:
  bool hasDuplicate(std::vector<int> &nums) {
    std::set<int> s;
    for (int i : nums) {
      s.insert(i);
    }
    if (s.size() == nums.size()) {
      return true;
    } else {
      return false;
    }
  }
};
