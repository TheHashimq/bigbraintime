#include <cmath>
#include <iostream>

long long int numberOfAttackingWays(int n);

int main() {
  // In
  int n{};
  std::cin >> n;
  // Process
  for (int i = 1; i <= n; i++) {
    long long int totalNumberOfWays =
        (std::pow(i, 2) * (std::pow(i, 2) - 1)) / 2;
    if (i == 1 || i == 2) {
      std::cout << totalNumberOfWays << '\n';
    } else {
      std::cout << totalNumberOfWays - numberOfAttackingWays(i) << '\n';
    }
  }
  return 0;
}

long long int numberOfAttackingWays(int n) {
  long long int res{};
  if (n == 1 || n == 2) {
    return res;
  }
  n = n - 2;
  // An = 4n^2 + 4n
  res = (4 * std::pow(n, 2)) + (4 * n);
  return res;
}
