#include <iostream>
#include <string>

int main() {
  std::string input;
  int out = 0;
  int currentValue = 0, HighestValue = 0;
  std::getline(std::cin, input);
  for (std::string::size_type i = 0; i < input.size(); i++) {
    if (input[i] == input[i + 1]) {
      currentValue++;
      out = currentValue;
    } else {
      if (currentValue > HighestValue) {
        HighestValue = currentValue;
        currentValue = 0;
      } else
        currentValue = 0;
    }
  }
  out = HighestValue + 1;
  std::cout << out;
  return 0;
}
