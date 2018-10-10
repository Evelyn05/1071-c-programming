#include <stdio.h>

int ari(int in1,int in2,int sum,int minus,int multi,int dev,int a){
    sum=in1+in2;
    minus=in1-in2;
    multi=in1*in2;
    dev=in1/in2;
    a=in1%in2;
    printf("%d+%d=%d\n",in1,in2,sum);
    printf("%d-%d=%d\n",in1,in2,minus);
    printf("%d*%d=%d\n",in1,in2,multi);
    printf("%d/%d=%d\n",in1,in2,dev);
    printf("%d%c%d=%d\n",in1,'%',in2,a);
}
int  BMI(int h1,int h2,float a1,float a2){
     if(h1>0&&h2>0){
            for(int i=h1;i<=h2;i++){
                a1=(i*i/10000.)*18.5;
                a2=(i*i/10000.)*24;
                printf("%4d cm=%.1f ~ %.1f(Kg)\n",i,a1,a2);
            }
    }
}
void prchar(char c,int n){
    for(int i=1;i<=n;i++){
        printf("%c",c);
}
}
int Triangles(int height){
    if(height>0){
    for(int i=1;i<=height;i++){
       prchar(' ',height-i);
       prchar('*',i);
       prchar(' ',2);
       prchar('*',i);
       printf("\n");}

    }

}
int enc(int N,int encode){
    if(N>0){
    encode=(N%1000%100/10)*1000+(N%1000%100%10)*100+((N/1000+5)%10)*10+N%1000/100;
    printf("encode(%d)=%d\n",N,encode);
}
}
int dec(int n,int decode){
    if(n>0){
     decode=((n%1000%100/10)+5)%10*1000+(n%1000%100%10)*100+(n/1000)*10+(n%1000/100);
     printf("decode(%d)=%d\n",n,decode);
}
}
int main(){
int choice;
int in1,in2,sum,minus,multi,dev,a;
int h1,h2;
float a1,a2;
int height;
int N,encode;
int n,decode;

while(1){
        printf("(1) Arithmetic Computation\n");
        printf("(2) List BMI ranges \n");
        printf("(3) Draw Four Vertical Triangles\n");
        printf("(4) encode(n) \n");
        printf("(5)decode(n) \n");
        printf("(6) Exit \n");
        scanf("%d",&choice);
        if(choice==6){
            printf("Bye! Coding by 406530120\n");
            break;
        }
switch(choice){

    case 1:
         printf("Enter two integers: ");
         scanf("%d %d",&in1,&in2);
         ari(in1,in2,sum,minus,multi,dev,a);
         break;
    case 2:
        printf("Enter height: ");
        scanf("%d %d",&h1,&h2);
        BMI(h1,h2,a1,a2);
        break;
    case 3:
        printf("Enter height: ");
        scanf("%d",&height);
        Triangles(height);
        break;
    case 4:
        printf("Enter N: ");
        scanf("%d",&N);
        enc(N,encode);
        break;
    case 5:
        printf("Enter n: ");
        scanf("%d",&n);
        dec(n,decode);
        break;
}
}return 0;
}



