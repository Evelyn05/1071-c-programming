#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 60
void rangden(int s[],int n){
    for(int i=0;i<n;i++)
        s[i]=rand()%101;
}
void prrary(int s[],int n){
for(int i=0;i<n;i++){
    printf("%3d",s[i]);
}
printf("\n");

}
void ssort(int s[],int n){
for(int i=0;i<n-1;i++){
        int temp;
    for(int j=0;j<n-i-1;j++){
        if(s[j]>s[j+1]){
            temp=s[j+1];
            s[j+1]=s[j];
            s[j]=temp;
        }
    }
}


}
int main(){
int s[MAX]={0};
int ssort[MAX]={-1};
int n,j;
int p=0,f=0;
int sum=0;
float a;
int testrun;
srand(time(NULL));
printf("Enter the number of test run:");
scanf("%d",&testrun);
for(int i=1;i<=testrun;i++){
    printf("Enter n:");
    scanf("%d",&n);
    rangden(s,n);
    prrary(s,n);

}printf("Number of scores:%d\n",n);
printf("***Scores Summary***\n\n");
printf("MAX =%d\n",s[j+1]);
printf("Min =%d\n",s[0]);
/*
sum=
a=(float)sum/(float)n;
printf("Average =%f\n",a);
*/
if(s[i]>=60)
    p++;
else
    f++;
printf("Passed =%d\n",p);
printf("Failed =%d\n",f);
ssort(s,n);

printf("Coding by 1-B 406530120 ¡È®K¨¿");

return 0;
}

