#include <stdio.h>
#include <ctype.h>

 int leap(int year){
    if((year%4==0 && year%100!=0)||year%400==0)
        return 1;
    else
        return 0;

    }
int main(){

int year;
int month,day;
int total=0;
int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
char cont='Y';
while(cont=='Y'){
    printf("Enter year: ");
    scanf("%d",&year);
    printf("Enter month and day:  ");
    scanf("%d %d",&month,&day);
    m[1]=28;
    total=0;
    if(leap(year))m[1]++;
    for(int i=0;i<month-1;i++)
        total+=m[i];

        printf("%d days passed since 1/1 %d year.\n",total+day,year);
        printf("Continue (Y/N)?");
        getchar();
        cont=toupper(getchar());
        printf("\n");


}
return 0;
}
