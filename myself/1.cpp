#include <stdio.h>

int main(){

int integer1,integer2,sum,a,b,c,d;

    printf("Enter two integers: ");
    scanf("%d %d",&integer1,&integer2);
    sum=integer1+integer2;
    printf("%d+%d=%d\n",integer1,integer2,sum);
    a=integer1-integer2;
    printf("%d-%d=%d\n",integer1,integer2,a);
    b=integer1*integer2;
    printf("%d*%d=%d\n",integer1,integer2,b);
    c=integer1/integer2;
    printf("%d/%d=%d\n",integer1,integer2,c);
    d=integer1 % integer2;
    printf("%d %c %d=%d\n",integer1,'%',integer2,d);

    return 0;

}
