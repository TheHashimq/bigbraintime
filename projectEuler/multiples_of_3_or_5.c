#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n;
  int sum = 0;
  scanf("%d" , &n);
  for (int i = 0 ; i < n ; i++) {
    if ( ((i%3) == 0 )|| ((i%5) == 0)) {
      sum = sum + i;
    }
  }
  printf("%d\n" , sum);
  return EXIT_SUCCESS;
}
