#include <array>
#include <iostream>

constexpr long int powerOf5(long int exponent) {
  long int res = 1;
  for (int i = 0; i < exponent; ++i) {
    res *= 5;
  }
  return res;
}
template <std::size_t N> constexpr std::array<long int, N> generatePower5() {
  std::array<long int, N> res{};
  for (std::size_t i = 1; i < N + 1; ++i) {
    res[i - 1] = powerOf5(static_cast<long int>(i));
  }
  return res;
}
int main() {
  int n{};
  long int count{};
  std::cin >> n;
  constexpr std::size_t len = 12;
  constexpr auto arrs = generatePower5<len>();
  int i = 0;
  while (arrs[i] <= n) {
    count += static_cast<int>(n / arrs[i]);
    i++;
  }
  std::cout << count << std::endl;
  return 0;
}
