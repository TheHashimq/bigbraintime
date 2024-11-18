#include <iostream>

int main (int argc, char *argv[]) {
  long int n;
  std::cin >> n;
  std::cout << n << " " ;
  if (1 == n){
    std::cout << "  " << std::endl;
    return 0;
  }
  do {
    if(n %2 == 0){
    n = n / 2;
    } else {
      n = (n*3) +1;
    }
    std::cout << n  << " ";
  } while(n != 1);
  std::cout << std::endl;
  return 0;
}
