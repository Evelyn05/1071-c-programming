#include <stdio.h>
#include <math.h>
#include <ctype.h>
int checksqrt(int n){

    for(int i=2;i<n;i++){
        if(n==i*i) return i;
    }

    return 0;

}
int main(){
int n,x;
char cont='Y';
while(cont=='Y'){
printf("Enter n:");
scanf("%d",&n);
if(x=checksqrt(n))
    printf("Yes. %d=%d*%d\n",n,x,x);
    else
        printf("No.\n");
        printf("Continue (Y/N)?");
        getchar();
        cont=toupper(getchar());
        printf("\n");


}printf("Coding by 406530120.");
return 0;
}
