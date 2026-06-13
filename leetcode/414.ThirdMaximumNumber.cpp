#include <algorithm>
#include <vector>

class Solution {
public:
  int thirdMax(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
    if (nums.size() < 3) {
      return nums.back();
    } else {
      return nums[nums.size() - 3];
    }
  }
};
