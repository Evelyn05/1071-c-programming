#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
struct Data{
    int num[10];

};
//int data[100];
int main(){
    Data data[MAX];
    int a=0;
 // float b;
    srand(time(NULL));
    printf("Randomly generating 100 bit data\n");
   for(int i=0;i<10;i++){
        for(int s=0;s<10;s++){
            data[i].num[s]= rand()%2;
            printf("%d ",data[i].num[s]);
            if(data[i].num[s]==0){
                a++;
            }
        }

printf("\n");
   }//b=a/100;
printf("Number(0) = %d\n",a);
printf("Number(1) = %d\n",100-a);
printf("Prob(0) = %.2f\n",a/100.0);
printf("Prob(1) = %.2f\n",(100-a)/100.0);
//Number(0) = 44  // 0 出現次數
//Number(1) = 56  // 1 出現次數
//Prob(0) = 0.44  // 0 出現機率
//Prob(1) = 0.56  // 1 出現機率







printf("Coding by 1B-406530120");
//return 0;
}
