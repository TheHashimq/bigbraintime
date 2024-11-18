#include <iostream>
#include <string>

void change(std::string &a);

int main(int argc, char **argv) {
  int n{};
  std::cin >> n;

  std::string arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  for (auto var : arr) {
    if (var.size() <= 10) {
      std::cout << var << '\n';
    } else {
      change(var);
      std::cout << var << '\n';
    }
  }
  return 0;
}

void change(std::string &str) {
  std::string temp{};
  temp = str[0];
  temp += std::to_string(str.size() - 2);
  temp += str[str.size() - 1];
  str = temp;
}
