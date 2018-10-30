#include <stdio.h>
void prchar(char c,int n){
for(int i=1;i<=n;i++){
    printf("%c",c);
}
}
void drawrect(int h,int w){
for(int i=1;i<=h;i++){
    prchar('*',w);
    printf("\n");
}
}
void rdrawrect(int h,int w){
if(h==1){
    prchar('*',w);
    printf("\n");}
else{
    rdrawrect(h-1,w);
    prchar('*',w);
    printf("\n");
}

}


int main(){
int h,w;
printf("enter height and width:");
scanf("%d %d",&h,&w);
printf("Draw using interation\n");
drawrect(h,w);
printf("Draw using recursion\n");
rdrawrect(h,w);
printf("Coding by 406530120.");

return 0;
}
