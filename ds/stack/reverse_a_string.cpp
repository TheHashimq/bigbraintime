#include <iostream>
#include <stack>
#include <string>

void reverse(std::string &input);
int main(int argc, char **argv) {
  std::string input;
  std::getline(std::cin, input);
  reverse(input);
  std::cout << input << std::endl;
  return 0;
}

void reverse(std::string &input) {
  std::stack<char> stk;
  for (auto i : input) {
    stk.push(i);
  }
  input = "";
  while (!stk.empty()) {
    input += stk.top();
    stk.pop();
  }
}
