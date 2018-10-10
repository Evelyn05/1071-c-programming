#include <stdio.h>



int main(){
int h1,h2;
float a1,a2;

while(h1>0&&h2>0){
        printf("Enter height(-1 to exit): ");
        scanf("%d %d",&h1,&h2);
    if(h1>0&&h2>0){
            for(int i=h1;i<=h2;i++){
                a1=(i*i/10000.)*18.5;
                a2=(i*i/10000.)*24;
                printf("%4d cm=%.1f ~ %.1f(Kg)\n",i,a1,a2);
            }
    }else
                printf("Bye! Coding by 406530120");

}
return 0;
}
