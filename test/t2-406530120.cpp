#include <stdio.h>
void prchar(char c,int n){
for(int i=1;i<=n;i++){
    printf("%c",c);


}
}
int main(){
int h;
while(h!=-1){
    printf("Enter height:");
    scanf("%d",&h);

        prchar('*',h+2);
        printf("\n");
        prchar(' ',1);
        prchar('*',h);
        prchar(' ',1);
        printf("\n");
        prchar(' ',2);
        prchar('*',h-2);
        prchar(' ',2);
        printf("\n");
        prchar(' ',3);
        prchar('*',3);
        prchar(' ',3);
        printf("\n");
        prchar(' ',2);
        prchar('*',h-2);
        prchar(' ',2);
        printf("\n");
        prchar(' ',1);
        prchar('*',h);
        prchar(' ',1);
        printf("\n");
        prchar('*',h+2);
        printf("\n");
        printf("\n\n");






}printf("Coding by 1-B 406530120 Áé¨K¬À");
return 0;
}
