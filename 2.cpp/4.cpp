#include <stdio.h>
void prarray(int g[],int n){
for(int i=0;i<n;i++){
    printf("%2d",&g[i]);
}
printf("\n");
}

int main(){
int failcount=0,passcount=0,aver=0,sum=0;
int n;
int g[n];

printf("Enter a series of scores between 0~100(-1 to exit).\n");
for(int i=1;i<=n;i++)
scanf("%d",& g[n-1]);
printf("Scores listing:\n");
prarray(g,n);
printf("The summary:\n");
printf("NumberCount = %d\n",n);
for(int i=0;i<n;i++){
    if(g[i]<60){
        failcount++;
    }
}
printf("FailedCount = %d\n",&failcount);
for(int i=0;i<n;i++){
    if(g[i]>60 || g[i]==60){
        passcount++;
    }
}
printf("PassCount = %d\n",&passcount);
for(int i=0;i<n;i++){
    sum+=g[i];
    aver=sum/n;
}
printf("Average = %d\n",&aver);

return 0;
}
