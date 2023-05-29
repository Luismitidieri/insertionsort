#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = arr[i];
       j = i - 1;

       while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = key;
   }
}

int main() {
   int arr[] = { //vetor desordenado//
   };
   int n = sizeof(arr) / sizeof(arr[0]);

   insertionSort(arr, n);

   printf("vetor ordenado: ");
   for (int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;
}
