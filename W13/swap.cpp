#include<stdio.h>
void swap(int *pa,int *pb){
    int temp= *pa;
    *pa=*pb;
    *pb=temp;
    printf("swap:%d %d\n",*pa,*pb);

}

int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("main:%d %d\n",a,b);
}
