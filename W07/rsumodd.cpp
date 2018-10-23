#include <stdio.h>
int rsumodd1(int n){
    if(n==1)
        return 1;
    else
        return rsumodd1(n-1)+2*n-1;

}
int rsumodd2(int n){
    if(n==1)
        return 1;
    else
        return rsumodd2(n-2)+n;


}

int main(){
int n;
while(n>0){
    printf("Enter n:");
    scanf("%d",&n);
    printf("sumodd1(%d) =%d\n",n,rsumodd1(n));
    printf("sumodd2(%d) =%d\n",n,rsumodd2(n));

}
return 0;
}
