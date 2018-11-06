#include <stdio.h>
#include <ctype.h>

int prime(int n){

for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }

}return 1;

}

int main(){
int n1,n2,n,a,b,c,d;
int sum;
char counti='Y';
while(counti=='Y'){
    printf("Enter two integers:");
    scanf("%d %d",&n1,&n2);
    if(n1%2==0)
        printf("%d is even:",n1);
    else
        printf("%d is odd:",n1);
    if(prime(n1)==1)
        printf("prime\n");
    else
        printf("nonprime\n");
    if(n2%2==0)
        printf("%d is even:",n2);
    else
        printf("%d is odd:",n2);
   if(prime(n2)==1)
        printf("prime\n");
    else
        printf("nonprime\n");
        sum=n1+n2;
        printf("%d + %d=%d\n",n1,n2,sum);
        a=n1-n2;
        printf("%d - %d=%d\n",n1,n2,a);
        b=n1*n2;
        printf("%d * %d=%d\n",n1,n2,b);
        c=n1/n2;
        printf("%d / %d=%d\n",n1,n2,c);
        d=n1%n2;
        printf("%d %% %d=%d\n",n1,n2,d);

    printf("Continue(Y/N)?");
    getchar();
    counti=toupper(getchar());
}
    printf("Coding by 1-B 406530120 鍾沛珊");


return 0;
}
