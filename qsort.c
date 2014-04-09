#include <stdio.h>
void print(int *tab, int start, int end) {
  for (int i = start; i <= end; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}

int main() {
  int tab[10] = {1,2,3,4,5,6,7,8,9,10};
  

 
  print(tab, 0, 9);


  return(0);
}
