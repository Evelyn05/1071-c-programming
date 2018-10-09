#include <stdio.h>

int main(){

int N,answer,D;
while(N>0){
        printf("Enter N(-1 TO exit): ");
        scanf("%d",&N);
if(N>0){

    answer=(N%1000%100/10)*1000+(N%1000%100%10)*100+((N/1000+5)%10)*10+(N%1000/100);
    D=(((answer%1000%100/10)+5)%10)*1000+(answer%1000%100%10)*100+(answer/1000)*10+answer%1000/100;
    printf("encode(%d)=%d\n",N,answer);
    printf("decode(%d)=%d\n",answer,D);

}else{
    printf("Bye! coding by 406530120");
}
}
return 0;
}

