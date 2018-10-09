#include <stdio.h>

int main(){
int    height1,height2 ;
float  answer1,answer2;
while(height1>0 && height2>0){
        printf("Enter height(-1 to exit): ");
        scanf("%d %d",&height1,&height2);

    if(height1>0 && height2>0){
        for(int i=height1;i<=height2;i++){

            answer1=(i*i/10000.)*18.5;
            answer2=(i*i/10000.)*24;
            printf("%4d cm:%.1f ~ %.1f (kg)\n",i,answer1,answer2);
        }

    }else{
        printf("Bye! Coding by 406530120");}

    }
return 0;

}







