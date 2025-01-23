#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

bool canBeAPalindrome(std::unordered_map<char, int> &map, int size);
std::string makePalindrom(std::unordered_map<char, int> &map, int size);
std::string makeN(char character, int value);
bool alreadyAPalindrom(std::string &inp);

int main() {
  std::string inp{};
  std::getline(std::cin, inp);
  if (alreadyAPalindrom(inp)) {
    std::cout << inp << std::endl;
    return 0;
  }
  std::unordered_map<char, int> map{};

  for (const auto &v : inp) {
    if (map.find(v) == map.end()) {
      map[v] = 1;
    } else {
      map[v] += 1;
    }
  }
  if (!canBeAPalindrome(map, inp.size())) {
    std::cout << "NO SOLUTION" << std::endl;
  } else {
    auto palindrom = makePalindrom(map, inp.size());
    std::cout << palindrom << std::endl;
  }
  return 0;
}

bool alreadyAPalindrom(std::string &inp) {
  int n = inp.size();
  for (int i = 0; i < n / 2; i++) {
    if (inp[i] != inp[n - i - 1]) {
      return false;
    }
  }
  return true;
}
std::string makePalindrom(std::unordered_map<char, int> &map, int size) {

  std::string half{}, middle{};
  for (const auto &v : map) {
    if (v.second % 2 == 1) {
      middle += v.first;
    }
    half += std::string(v.second / 2, v.first);
  }

  std::sort(half.begin(), half.end());
  std::string reversedHalf = half;
  std::reverse(reversedHalf.begin(), reversedHalf.end());
  return half + middle + reversedHalf;
  /* std::string palindrom{};
  // For even
  if (!(size & 1)) {
    std::string temp{};
    for (const auto &v : map) {
      temp = temp + makeN(v.first, v.second);
    }
    std::sort(temp.begin(), temp.end());
    palindrom = temp;
    std::reverse(temp.begin(), temp.end());
    palindrom = palindrom + temp;
  } else {
    // For Odd
    std::string temp{};
    char middleChar{};
    for (const auto &v : map) {
      if (v.second & 1) {
        temp = temp + makeN(v.first, v.second - 1);
        middleChar = v.first;
        continue;
      } else {
        temp = temp + makeN(v.first, v.second);
      }
    }
    std::sort(temp.begin(), temp.end());
    palindrom = temp + middleChar;
    std::reverse(temp.begin(), temp.end());
    palindrom = palindrom + temp;
  }return palindrom;
   */
}

std::string makeN(char character, int value) {
  std::string res;
  for (int i = 0; i < value / 2; i++) {
    res = res + character;
  }
  return res;
}

bool canBeAPalindrome(std::unordered_map<char, int> &map, int size) {
  // For even size
  if (!(size & 1)) {
    for (const auto &v : map) {
      if (v.second & 1) {
        return false;
      }
    }
  } else {
    // For odd size
    int oddCount{};
    for (const auto &v : map) {
      if ((v.second & 1)) {
        oddCount++;
        if (oddCount > 1) {
          return false;
        }
      }
    }
  }
  return true;
}
