#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::vector<int> num;
    std::unordered_map<int, int> list;

    for (const auto &v : nums) {
      if (list.find(v) != list.end()) {
        list[v] += 1;
      } else {
        list[v] = 1;
      }
    }

    for (const auto &v : list) {
      std::cout << v.first << " " << v.second << '\n';
    }
    while (k > 0) {
      int max = getMaxValue(list);
      num.push_back(max);
      list[max] = -1;
      --k;
    }
    return num;
  }

  int getMaxValue(std::unordered_map<int, int> &frequencyCount) {
    int maxValue{};
    int maxKey{};
    for (auto it : frequencyCount) {
      if (it.second > maxValue) {
        maxKey = it.first;
        maxValue = it.second;
      }
    }
    std::cout << "Max = " << maxKey << " " << maxValue << '\n';
    return maxKey;
  }
};

