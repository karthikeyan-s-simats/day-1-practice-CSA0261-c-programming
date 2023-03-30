#include <stdio.h>

int main() {
   int m, n, temp;

   printf("Enter value of m: ");
   scanf("%d", &m);

   printf("Enter value of n: ");
   scanf("%d", &n);

   printf("Before swapping, m = %d and n = %d\n", m, n);

   temp = m;
   m = n;
   n = temp;

   printf("After swapping, m = %d and n = %d\n", m, n);

   return 0;
}

