#include <cstdlib>
#include <iostream>
#include <vector>

const int MAX_SIZE = 128;

std::string isPerfect(std::vector<int> &a);

int main(int argc, char **argv) {
  int t{};
  int n{};
  std::vector<int> a;
  std::vector<std::string> perfect;
  std::cin >> t;
  int temp{};
  for (int i = 0; i < t; i++) {
    std::cin >> n;
    std::vector<int> notes;
    for (int j = 0; j < n; j++) {
      std::cin >> temp;
      notes.push_back(temp);
    }
    perfect.push_back(isPerfect(notes));
  }

  for (auto var : perfect) {
    std::cout << var << '\n';
  }
  return 0;
}

std::string isPerfect(std::vector<int> &a) {
  for (int i = 0; i < a.size() - 1; i++) {
    int absv = abs(a[i] - a[i + 1]);
    if (absv != 5 && absv != 7) {
      return "NO";
    }
  }
  return "YES";
}
