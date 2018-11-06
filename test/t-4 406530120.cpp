#include <stdio.h>
int rsum(int n){
    int sum=0;
if(n==1)
    return n;
else{
    sum=rsum(n-1)+(3*(n-1)+1);
    return sum;

}

}

int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
printf("sum(%d)=%d\n",n,rsum(n));
printf("sum(%d)=%d\n",n+1,rsum(n+1));
printf("sum(%d)=%d\n",n+2,rsum(n+2));






printf("Coding by 1-B 406530120 Áé¨K¬À");
return 0;
}

