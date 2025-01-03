#include <iostream>
#include <vector>

long int findLayer(long int x, long int y);

int main(int argc, char **argv) {
  int t{};
  long int y{}, x{};
  long int temp{};
  std::vector<long int> out{};

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::cin >> x >> y;
    temp = findLayer(x, y);
    out.push_back(temp);
  }

  for (const auto &v : out) {
    std::cout << v << " ";
  }
  std::cout << std::endl;
  return 0;
}

long int findLayer(long int x, long int y) {
  long int out{};
  long int max = [&]() {
    if (x > y)
      return x;
    else
      return y;
  }();

  // Find the value at max , max
  // AP {
  //  1 : 0,0
  //  3 : 1,1
  //  7 : 2,2
  // 13 : 3,3
  // 21 : 4,4
  // }
  long int An = (max * max) - max + 1;

  // Even or odd layer;
  int diff{};
  if (x == y && y == max) {
    return An;
  }

  if (max % 2 == 0) {
    // If going left --
    // If going up ++
    if (x < y) {
      // Going up;
      diff = max - x;
      out = An - diff;
      return out;
    } else if (x > y) {
      diff = max - y;
      out = An + diff;
      return out;
    }
  } else {
    // If going left ++
    // If going up --
    if (x < y) {
      diff = max - x;
      out = An + diff;
      return out;
    } else if (x > y) {
      diff = max - y;
      out = An - diff;
      return out;
    }
  }
  return 0;
}
