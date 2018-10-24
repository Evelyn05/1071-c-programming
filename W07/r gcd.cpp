#include <stdio.h>
int rgcd(int a,int b){
    if(a==0)
        return b;
    else
        return rgcd(b%a,a);

}
int gcd(int a,int b){

return rgcd(a,b);
}
int main (){
int a,b;
    printf("rgcd(48,126)=%d\n",rgcd(48,126));
    printf("gcd(48,126)=%d\n\n",gcd(48,126));
    printf("rgcd(48,128)=%d\n",rgcd(48,128));
    printf("gcd(48,128)=%d\n\n",gcd(48,128));
    printf("rgcd(48,144)=%d\n",rgcd(48,144));
    printf("gcd(48,144)=%d\n\n",gcd(48,144));
    printf("rgcd(48,48)=%d\n",rgcd(48,48));
    printf("gcd(48,48)=%d\n\n",gcd(48,48));

}
