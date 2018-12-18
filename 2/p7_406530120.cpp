#include<stdio.h>

#include<conio.h>
int getPrime(int primes[]){
    int i=0,j;
    for(i=0;i<=1000;i++)
    {for(j=2;j<=i;j++)
    if(i%j==0)
    return 0;
   else if(i%j!=0)
    return 1;
    }
    getch();

    }
int main()
{int a,b,j;
    while (scanf("%d %d",&a,&b)!=EOF){
            if(getPrime==1){
                printf("%d",j);
            }

    }

}
