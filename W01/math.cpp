 #include <stdio.h>
 #include <math.h>
 int main(){
 int a , b , c; double X1,X2;
 printf("Enter a b c: ");
 scanf("%d %d %d",&a,&b,&c);
 if(b*b-4*a*c>=0){
 	X1 = (-b+sqrt(b*b-4*a*c))/(2*a); 
 	X2 = (-b-sqrt(b*b-4*a*c))/(2*a);
 	printf("For equation %d*X^2+%d*X+%d=0, two roots are\n",a,b,c);
 	printf("X1 = %.1f\n",X1);
 	printf("X2 = %.1f",X2);
 }else{
 	printf("no real roots");
 }
 }
