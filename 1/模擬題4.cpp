#include <stdio.h>

int main()
{
int N,encode,decode;


while(N>0){
    printf("Enter N (-1 to exit): ");
    scanf("%d",&N);
if(N>0){
    encode=(N%1000%100/10)*1000+(N%1000%100%10)*100+((N/1000+5)%10)*10+N%1000/100;
    decode=((encode%1000%100/10)+5)%10*1000+(encode%1000%100%10)*100+(encode/1000)*10+(encode%1000/100);
    printf("encode(%d)=%d\n",N,encode);
    printf("decode(%d)=%d\n",encode,decode);

}else
    printf("Bye! coding by 406530120");


}
return 0;

}
