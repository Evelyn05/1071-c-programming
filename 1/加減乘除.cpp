#include <stdio.h>

int in1,in2,sum,minus,multi,dev,a;
int main(){

    printf("Enter two integers: ");
    scanf("%d %d",&in1,&in2);
    sum=in1+in2;
    printf("%d+%d=%d\n",in1,in2,sum);
    minus=in1-in2;
    printf("%d-%d=%d\n",in1,in2,minus);
    multi=in1*in2;
    printf("%d*%d=%d\n",in1,in2,multi);
    dev=in1/in2;
    printf("%d/%d=%d\n",in1,in2,dev);
    a=in1%in2;
    printf("%d%c%d=%d\n",in1,'%',in2,a);
return 0;
}
