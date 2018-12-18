#include<stdio.h>

#include<conio.h>
int getPrime(int primes[]){
    int i=0,j;
    for(i=0;i<=1000;i++)
    {for(j=2;j<=i;j++)
    if(i%j==0)
    return 0;
   else if(i%j!=0)
    return j;
    }
    getch();

    }
int main()
{int a,b,c;
c=getPrime(primes[])
    while (scanf("%d %d",&a,&b)!=EOF){
            if(a<=getPrime==1<=b){
                printf("%d",c);
            }

    }

}
