#include<stdio.h>

int main() {
 int n, height, times;
 scanf("%d", &n);
 while (n-- > 0 && scanf("%d %d", &height, &times) != EOF) {
  while (times--) {
   for (int i = 1; i <= height; i++) {
    for (int j = 0; j < i; j++)
     printf("%d", i);
    printf("\n");
   }
   for (int i = height - 1; i >= 1; i--) {
    for (int j = 0; j < i; j++)
     printf("%d", i);
    printf("\n");
   }
   if (times) printf("\n");
  }
  if (n) printf("\n");
 }
}
