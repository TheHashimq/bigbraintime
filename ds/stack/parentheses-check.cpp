#include <iostream>
#include <stack>

bool validate(std::string &input, const int size);

int main(int argc, char **argv) {
  std::string input{};

  std::getline(std::cin, input);
  bool isValid = validate(input, input.size());
  if (isValid) {
    std::cout << "Valid Paraentheses" << std::endl;
  } else {
    std::cout << "Not Valid Paraenthese " << std::endl;
  }
  return 0;
}

bool validate(std::string &input, const int size) {
  std::stack<char> stk;
  for (auto i : input) {
    if (i == '{' || i == '[' || i == '(') {
      stk.push(i);
    } else {
      if (!stk.empty() &&
          (stk.top() == '(' && i == ')' || stk.top() == '{' && i == '}' ||
           stk.top() == '[' && i == ']')) {
        stk.pop();
      } else {
        return false;
      }
    }
  }
  return stk.empty();
}
