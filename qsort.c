#include <stdio.h>

int partitioning(int *tab, int p, int r) {
  int pivot = tab[p], i = p-1, j = r+1;
  int temp;
  while (1) {
        do
   j--;
        while (tab[j] > pivot);
        do
   i++;
        while (tab[i] < pivot);
        if (i < j) {
   temp = tab[i];
   tab[i] = tab[j];
   tab[j] = temp;
        }
        else
   return j;
  }
}

void quicksort(int *tab, int p, int r) {
  int q;
  if (p < r) {
    q = partitioning(tab, p, r);
    quicksort(tab, p, q);
    quicksort(tab, q + 1, r);
  }
}

void print(int *tab, int start, int end) {
  for (int i = start; i <= end; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}

int main() {
  int tab[10] = {10,8,9,6,4,5,1,3,2,7};

  quicksort(tab, 0, 8);
  print(tab, 0, 9);

  return(0);
}
