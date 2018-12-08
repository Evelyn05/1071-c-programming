# include <stdio.h>
int main(){
    long long n,o;
    while(scanf("%11d %11d",&n,&o)!= EOF){
        printf("%11d\n",(n>=o)?n-o:o-n);
    }

return 0;
}
