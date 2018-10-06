#include <stdio.h>

int main(){
int number,total,original;
    printf("Please Enter number: ");
    scanf("%d",&number);
    original=number*300;
if(number<10){
    total=original;
}
if(number>=10){
    total=original*0.8;
}
    printf("Total is %d: ",total);

    return 0;
}

