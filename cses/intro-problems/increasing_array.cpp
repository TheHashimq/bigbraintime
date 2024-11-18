#include <iostream>
#include <vector>

int main() {

  int size{};
  std::vector<long int> arr;
  long int pushInt;
  long int move{};
  long int diff;

  std::cin >> size;
  for (int i = 0; i < size; i++) {
    std::cin >> pushInt;
    arr.push_back(pushInt);
  }
  for (int i = 0; i < size - 1; i++) {
    diff = 0;

    if (arr[i] == arr[i + 1]) {
      diff = 0;
    } else if (arr[i] > arr[i + 1]) {
      diff = arr[i] - arr[i + 1];
      arr[i + 1] = arr[i + 1] + diff;
      move = move + diff;
    }
  }

  std::cout << move;
  return 0;
}
