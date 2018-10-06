#include <stdio.h>

int integer1,integer2,integer3,sum;
int main(){
    printf("Please Enter first integer \n");
    scanf("%d",&integer1);
    printf("Please Enter second integer \n");
    scanf("%d",&integer2);
    printf("Please Enter third integer \n");
    scanf("%d",&integer3);
    sum= integer1+integer2+integer3;
    printf("Sum is %d.\n",sum);

    return 0;
}
