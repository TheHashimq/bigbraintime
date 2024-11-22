#include <array>
#include <iostream>
#include <vector>

int willImplement(std::vector<std::array<int, 3>> &arr);

int main(int argc, char **argv) {
  int n{};
  std::cin >> n;
  std::vector<std::array<int, 3>> arr{};
  std::array<int, 3> temp{};
  for (int i = 0; i < n; i++) {
    std::cin >> temp[0];
    std::cin >> temp[1];
    std::cin >> temp[2];
    arr.push_back(temp);
  }
  int imp = willImplement(arr);
  std::cout << imp << std::endl;
  return 0;
}

int willImplement(std::vector<std::array<int, 3>> &arr) {
  int count{};

  for (auto ar : arr) {
    if ((ar[0] + ar[1] + ar[2]) >= 2) {
      count++;
    }
  }
  return count;
}
