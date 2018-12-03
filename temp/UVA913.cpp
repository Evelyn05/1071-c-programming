#include <stdio.h>
 
int main()
{
    long long n;
    while(scanf("%lld", &n) != EOF){
        n = (1 + n)/2;
        n *= n;
        printf("%lld\n", n * 6 - 9);
    }
    return 0;
}
