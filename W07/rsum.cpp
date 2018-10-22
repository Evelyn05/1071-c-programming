int sum(int n){
    for(int i=1;i<=n;i++){

        total+=i;

    }
return total;

}

int rsum(int n){
    printf("%d\n",n);
    if(n==1)
        return 1;
    else
        return rsum(n-1)+n;

}

int main(){
int n;
    printf("enter n ");
    scanf("%d",&n);
    printf("sum(%d)=%d\n",n,sum(n));
    printf("rsum(%d)=%d",n,rsum(n));


}
