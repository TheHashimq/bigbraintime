/*
 * A permutation of integers 1,2,....,n is called beautiful if there are no
 * adjacent elements whose difference is 1. Given n, construct a beautiful
 * permutation if such a permutation exists.
 *
 * Input: 5 {n}
 * Output : 4 2 5 1 3
 *
 * Constraints:
 * 1 <= n <= 10^6
 *
 * */

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  int n{};
  std::vector<int> arr;

  std::cin >> n;
  if (n == 1) {
    std::cout << 1;
    return 0;
  } else if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION" << std::endl;
    return 0;
  }
  std::vector<int> evenArr{};
  std::vector<int> oddArr{};
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      evenArr.push_back(i);
    } else {
      oddArr.push_back(i);
    }
  }
  for (const auto &v : oddArr) {
    evenArr.push_back(v);
  }
  for (const auto &v : evenArr) {
    std::cout << v << " ";
  }
  return 0;
}
