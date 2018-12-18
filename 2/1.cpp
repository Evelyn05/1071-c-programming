#include <stdio.h>

int main(){
    int m[100];
    for(int i=1;i<=9;i++){
            printf("   %2d",i);

        //for(int j=1;j<=9;j++){

           // printf("%2d  ",j);

        }printf("\n");
    //}printf("\n");
    printf("------------------------------------------");
    printf("\n");
    for(int i=1;i<=9;i++){
          for(int i=1;i<=9;i++){
            printf("%2d  ",i);
        printf("|");

        for(int j=1;j<=9;j++){
            printf("%2d  ",i*j);
        }
        printf("\n");
    }
printf("-------------------------------------------\n");
printf("Coding by 1B-406530120");
return 0;
}
}
