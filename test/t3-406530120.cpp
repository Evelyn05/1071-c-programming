#include <stdio.h>
void tower(int n,char to,char aux,char from){
if(n==1){
    printf("%c -> %c\n",from,to);
}else{
    tower(n-1,aux,to,from);
    printf("%c -> %c\n",from,to);
    tower(n-1,to, from,aux);

}


}

int main(){

int n;
printf("Enter N:");
scanf("%d",&n);
tower(n,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); // tower(N,'A','B','C'); //
printf("Coding by 1-B 406530120 ¡È®K¨¿");

return 0;
}
