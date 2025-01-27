/* Coin Piles : You have two coin piles containing a and b coins.
 * On each move, you can either remove one coin from the left pile and two coins
 * from the right pile, Or two coins from the left pile and one coin from the
 * right pile. Your task is to efficiently find out if you can empty both the
 * piles.
 *
 * Input:
 * The first input line has an integer t: the number of tests.
 * After this, there are t lines, each of which has two integers a and b: the
 * numbers of coins in the piles.
 *
 * Output:
 * For each test, print "YES" if you can empty the piles and "NO" otherwise.
 *
 * Constraints:
 *  1 < t < 10^5
 *  0 < a , b < 10^9
 *
 * */

#include <bits/stdc++.h>

bool canEmptyPile(std::pair<int, int> pair);

int main() {
  int t{};
  std::cin >> t;
  std::vector<std::pair<int, int>> vec{};

  std::pair<int, int> temp{};
  for (int i = 0; i < t; i++) {
    std::cin >> temp.first >> temp.second;
    vec.push_back(temp);
  }

  for (const auto &v : vec) {
    if (canEmptyPile(v)) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }
  return 0;
}

bool canEmptyPile(std::pair<int, int> pair) {
  int a = pair.first;
  int b = pair.second;

  bool totalDivisibleBy3 = ((a + b) % 3 == 0);
  bool validDifference = (std::max(a, b) <= 2 * std::min(a, b));

  return totalDivisibleBy3 && validDifference;
}
