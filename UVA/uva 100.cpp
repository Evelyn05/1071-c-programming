#include <stdio.h>
int n3(int n) {
 if (n == 1) return 1;
 n = n % 2 ? 3 * n + 1 : n / 2;
 return n3(n) + 1;
}
int main(){
    int i,j,temp,m;
    while(scanf("%d %d",&i,&j)!= EOF){
            if (i > j) {
   temp = i;
   i = j;
   j = temp;
  }
  m= -1;
  for (int k = i; k <= j; k++) {
   if (m< (temp = n3(k)))m= temp;
  }
            printf("%d %d %d\n",i,j,m);

    }
return 0;
}
