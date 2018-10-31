#include <stdio.h>
#include <ctype.h>
int isprime(int n){
    for(int i=2;i<n/2;i++){
      if(n%i==0) return 0;
    }
    return 1;
}
int findprime(int data[],int n1,int n2){
for(int i=n1;i<=n2;i++){
    if(isprime(i))printf("%d\n",i);
}
}
int findprime2(int data[],int n1,int n2){
int sum=0;
if(isprime(i)==1){
    data[sum]=i
    sum++;
}return sum;
}
int main(){
int sum,n1,n2;
char cont='Y';
while(cont=='Y'){
    printf("Enter n1 and n2:");
    scanf("%d %d",&n1,&n2);
    sum=findprime2(data[],n1,n2);
    printf("%d primes between n1and n2.",sum);
    findprime(data,n1,n2);
    printf("Continue (Y/N)?");
    getchar();
    cont=toupper(getchar());
    printf("\n");

}printf("Coding by 406530120.");
}
