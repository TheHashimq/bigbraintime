#include <iostream>
#include <set>

int main() {
  int n;
  std::set<int> distinctValues{};
  std::cin >> n;

  int temp{};
  for (int i = 0; i < n; i++) {
    std::cin >> temp;
    distinctValues.insert(temp);
  }
  std::cout << distinctValues.size() << std::endl;
  return 0;
}
