#include <iostream>

std::string check(int w);

int main(int argc, char **argv) {
  int w;
  std::cin >> w;
  std::string out = check(w);
  std::cout << out;
  return 0;
}

std::string check(int w) {
  for (int i = 2; i <= w; i = i + 2) {
    for (int j = 2; j <= w; j = j + 2) {
      if (i + j == w) {
        return "YES";
      }
    }
  }
  return "NO";
}
