#include <iostream>
#include <utility>
#include <vector>

int oddCount(int n);
std::vector<std::vector<int>> forEvenN(int n);
std::vector<std::vector<int>> forOddN(int n);

int main() {
  int n{};
  std::cin >> n;
  if ((oddCount(n) & 1))
    std::cout << "NO" << std::endl;
  else {
    std::cout << "YES" << std::endl;
    if (n & 1) {
      auto sets = std::move(forOddN(n));
      std::cout << sets[1].size() << '\n';
      for (const auto &v : sets[1]) {
        std::cout << v << ' ';
      }
      std::cout << '\n';
      std::cout << sets[0].size() << '\n';
      for (const auto &v : sets[0]) {
        std::cout << v << ' ';
      }
      std::cout << '\n';
    } else {
      auto sets = std::move(forEvenN(n));
      std::cout << sets[0].size() << '\n';
      for (const auto &v : sets[0]) {
        std::cout << v << ' ';
      }
      std::cout << '\n';
      std::cout << sets[1].size() << '\n';
      for (const auto &v : sets[1]) {
        std::cout << v << ' ';
      }
      std::cout << '\n';
    }
  }
  return 0;
}

/* N = 3
 * S1 = 1 2
 * S2 =      3
 *
 * N = 7
 * S1 = 1 2 5 6
 * S2 = 3 4 7
 *
 * N = 15
 * S1 = 1 2 5 6 9 10 13 14
 * S2 = 3 4 7 8 11 12 15
 * */
std::vector<std::vector<int>> forOddN(int n) {
  std::vector<std::vector<int>> sets{};
  std::vector<int> set1{};
  std::vector<int> set2{};
  for (int i = 1; i <= n; i++) {
    if (i <= n) {
      set1.push_back(i);
      i++;
    }
    if (i <= n) {
      set1.push_back(i);
      i++;
    }
    i++;
  }
  for (int i = 3; i <= n; i++) {
    if (i <= n) {
      set2.push_back(i);
      i++;
    }
    if (i <= n) {
      set2.push_back(i);
      i++;
    }
    i++;
  }
  sets.push_back(set1);
  sets.push_back(set2);
  return sets;
}

/*
 * N = 4
 * S1 = 1 4
 * S2 = 2 3
 *
 * N = 8
 * S1 = 1 4 5 8
 * S2 = 2 3 6 7
 *
 * N = 12
 * S1 = 1 4 5 8 9 12
 * S2 = 2 3 6 7 10 11
 * */

std::vector<std::vector<int>> forEvenN(int n) {
  std::vector<std::vector<int>> sets{};
  std::vector<int> set1{};
  std::vector<int> set2{};

  set1.push_back(1);
  for (int i = 4; i <= n; i++) {
    if (i <= n) {
      set1.push_back(i);
      i++;
    }
    if (i <= n) {
      set1.push_back(i);
      i++;
    }
    i++;
  }

  for (int i = 2; i <= n; i++) {
    if (i <= n) {
      set2.push_back(i);
      i++;
    }
    if (i <= n) {
      set2.push_back(i);
      i++;
    }
    i++;
  }

  sets.push_back(set1);
  sets.push_back(set2);
  return sets;
}
int oddCount(int n) {
  int count{};
  for (int i{}; i <= n; i++) {
    if (i & 1)
      count++;
  }
  return count;
}
