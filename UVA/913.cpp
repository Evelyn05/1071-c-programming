#include <stdio.h>
int main(){
    long long n;
    while(scanf("%11d",&n)!=EOF){
        long long sum=0,totalnum=0;
        for(int i=n;i>=1;i=i-2)
            totalnum+=i;
        sum=3*(2*(totalnum-1)-1);
        printf("%11d\n",sum);
    }



return 0;
}
