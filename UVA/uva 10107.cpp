#include <stdio.h>

#define n 1000

int main()
{int data[n];
    int count=0;
	while(scanf("%d",&data[count++])!=EOF){
        //for(int i=0;i<=n;i++){
                //if(data[i]==1)return 1;
        else if(data[i]>data[i+1]){
                int temp;
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
        }printf("%d\n",((n+1)%2)?(data[n/2]):((data[n/2]+data[n/2-1])/2));
	}
	return 0;
}
