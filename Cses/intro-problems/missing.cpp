#include <iostream>
int main (int argc, char *argv[]) {
  long int n;
  std::cin >> n ;
  int arr[n-1];
  int temp[n];
  for (int i = 0; i < n - 1; i++) {
    std::cin >> arr[i];

  }
  for (int i = 0; i < n; i++) {
   temp[i] = i + 1;
  }
    
  for (int i = 0; i < n-1 ; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] == temp[j] ) {
        temp[j] = -1;
      }
    }
  }

  for (int i = 0; i < n-1; i++) {
    if(temp[i] != -1){
      std::cout << temp[i]; 
    }
  }
  std::cout << "\n";
  return 0;
}


