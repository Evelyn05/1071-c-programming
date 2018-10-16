#include <stdio.h>

int Arithmetic(int integer1,int integer2,int sum,int a,int b,int c,int d)
{
    sum=integer1+integer2;
    a=integer1-integer2;
    b=integer1*integer2;
    c=integer1/integer2;
    d=integer1 % integer2;
    printf("%d+%d=%d\n",integer1,integer2,sum);
    printf("%d-%d=%d\n",integer1,integer2,a);
    printf("%d*%d=%d\n",integer1,integer2,b);
    printf("%d/%d=%d\n",integer1,integer2,c);
    printf("%d %c %d=%d\n",integer1,'%',integer2,d);

}

int BMI(int height1,int height2,double answer1,double answer2)
{
    if(height1>0 && height2>0){
        for(int i=height1;i<=height2;i++)
        {
            answer1=(i*i/10000.)*18.5;
            answer2=(i*i/10000.)*24;
            printf("%4d cm:%.1f ~ %.1f (kg)\n",i,answer1,answer2);
        }
    }else{
        printf("Bye! Coding by 406530120");
        }
}
void prchar(char c, int n){
	for(int i=1; i<=n; i++){
		printf("%c", c);
	}
}

int trian(int height)
{
    if(height>0){
        for(int i=1;i<=height;i++){
            prchar(' ',height-i);
            prchar('*',i);
            prchar(' ',2);
            prchar('*',i);
            printf("\n");
}
    }
    }
int encode(int N,int answer)
{
    if(N>0){
        answer=(N%1000%100/10)*1000+(N%1000%100%10)*100+((N/1000+5)%10)*10+(N%1000/100);
        printf("encode(%d)=%d\n",N,answer);
}
}
int decode(int n,int D)
{
    if(n>0){
         D=(((n%1000%100/10)+5)%10)*1000+(n%1000%100%10)*100+(n/1000)*10+n%1000/100;
         printf("decode(%d)=%d\n",n,D);
    }
}

 int main()
 {
    int integer1, integer2, sum, a, b, c, d,choice,height1,height2,answer1,answer2,height,N,answer,n,D;

    {
    while(1){
        printf("Main menu\n");
        printf("1. Arithmetic Computation\n");
        printf("2. List BMI ranges\n");
        printf("3. Draw Four Vertical Triangles\n");
        printf("4. encode(n)\n");
        printf("5. decode(n)\n");
        printf("6.exist\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==6)break;
        switch(choice)
{
        case 1:
         printf("Enter two integers: ");
         scanf("%d %d",&integer1,&integer2);
         Arithmetic(integer1,integer2,sum,a,b,c,d);

        break;

        case 2:
         printf("Enter height: ");
         scanf("%d %d",&height1,&height2);
         BMI(height1,height2,answer1,answer2);
        break;

        case 3:
         printf("Please enter height: ");
         scanf("%d",&height);
         trian(height);
         break;

        case 4:
         printf("Enter N: ");
         scanf("%d",&N);
         encode(N,answer);
         break;

        case 5:
         printf("Enter n: ");
         scanf("%d",&n);
         decode(n,D);
         break;
}
}
}
}
