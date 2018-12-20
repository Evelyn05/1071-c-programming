#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
FILE *fp;
int counter=0;
struct Date{
   int year;
   int month;
   int day;
};

struct Lotto{
   Date date;
   int num[6];
};
int duplicate(int num[], int pos){
  for(int i=0;i<pos;i++){
    if(num[i]==num[pos]) return 1;
  }
  return 0;
}
void randgen(Lotto lottos[],int n){
    int temp;
    for(int i=0;i<n;i++){
     lottos[counter].date.year = rand()%11+2010;
     lottos[counter].date.month = rand()%12+1;
     lottos[counter].date.day = rand()%31+1;
     //printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
     for(int j=0;j<6;j++){
        do{


           temp = rand()%49+1;
        }while(duplicate(lottos[counter].num,j));

        lottos[counter].num[j] = temp;
        //printf("%02dlottos, counter ", lottos[i].num[j]);
     }
     counter++;
     //printf("\n");
   }

}
void resetfile(Lotto lottos[],int n){
     for(int i=0;i<counter;i++){
        lottos[i].date.year=0;
        lottos[i].date.month=0;
        lottos[i].date.day=0;
        for(int j=0;j<6;j++)
            lottos[i].num[j]=0;
inputLotto
    }

}
void inputLotto(Lotto lottos[]){
    int choice;
    char filename[80];
    printf("Enter filename: ");
    scanf("%s",&filename);
    fp=fopen(filename,"r");
    if(fp==NULL){
     printf("Error on writting to file\n");
    exit(1);
    }
     Lotto inputLotto;
     int i=0;
   while(fread(&inputLotto, sizeof(Lotto), 1, fp)){
	 lottos[i].date.year = inputLotto.date.year;
	 lottos[i].date.month = inputLotto.date.month;
	 lottos[i].date.day = inputLotto.date.day;
	 for(int j=0;j<6;j++)
		lottos[i].num[j] = inputLotto.num[j];
	 i++;
   }
    counter=i;
    fclose(fp);
    printf("%d lotto data read successfully from file %s \n",counter,filename);
}
void showLottos(Lotto lottos[],int counter){
    for(int i=0;i<counter;i++){
        printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
        for(int j=0;j<6;j++)
            printf("%02d ", lottos[i].num[j]);
        printf("\n");
    }

}
void writefile(Lotto lottos[],int n){
    int choice;
    char filename[80];
    printf("Enter filename: ");
    scanf("%s",&filename);
    printf("Choice:1 for write over, 2 for append\n");
    scanf("%d",&choice);
    if(choice==1)
        fp=fopen(filename,"w");
    else
        fp=fopen(filename,"a");
    if(fp==NULL){
     printf("Error on writting to file\n");
    exit(1);
    }
        int num = fwrite(lottos, sizeof(Lotto),n,fp);
fclose(fp);
printf("%d lotto data written to file %s successfully\n",n,filename);
}

int main(){
   Lotto lottos[MAX];
    srand(time(NULL));
   int n;
   int temp;
   printf("Enter N: ");
   scanf("%d", &n);
   printf("\n");
   randgen(lottos, n);
   showLottos(lottos, counter);
    printf("\n");
   randgen(lottos, n);
   showLottos(lottos, counter);
    writefile(lottos, counter);
    resetfile(lottos, counter);
    inputLotto(lottos);
    showLottos(lottos, counter);

}
