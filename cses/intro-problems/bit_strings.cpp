#include <iostream>

constexpr unsigned long long int mod = 1000000007;

long long int modExpFunc(long long int a, long long int n) {
  a = a % mod;
  long long int r = 1;
  while (n != 0) {
    if ((n & 1) == 1) {
      r = (r * a) % mod;
    }
    a = (a * a) % mod;
    n = n >> 1;
  }
  return r;
}
int main() {
  int n{};
  std::cin >> n;
  std::cout << modExpFunc(2, n) << std::endl;
  return EXIT_SUCCESS;
}
