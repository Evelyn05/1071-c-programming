#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

struct Date{
    int year;
    int month;
    int day;
};

struct Lotto{
  Date date;
  int num[6];
  char *winner;
};

void prLotto(Lotto lottos[], int N){
  for(int i=0;i<N;i++){
    printf("[%d] %4d/%02d/%02d, ", i, lottos[i].date.year, lottos[i].date.month, lottos[i].date.day);
    for(int j=0;j<6;j++){
      printf("%02d ", lottos[i].num[j]);
    }
    printf(", Winner:%s\n",lottos[i].winner);
  }
}

int main(){
  Lotto lotto;
  char *names[10] = {"Adam Smith", "Steve Edam", "Amy Jones", "Louis Love", "William Cash", "Dave Bush", "Chris Winston", "Jim Copper", "John Copper", "Haro Johnson"};

  printf("Enter year month day: ");
  scanf("%d %d %d", &lotto.date.year, &lotto.date.month, &lotto.date.day);
  printf("%4d/%02d/%02d, ", lotto.date.year, lotto.date.month, lotto.date.day);
  srand(time(NULL));
  for(int i=0;i<6;i++){
    lotto.num[i] = rand()%49+1;
    printf("%02d ", lotto.num[i]);
  }
  printf("\nEnter winner: ");
  fflush(stdin);
  lotto.winner=(char *)malloc(sizeof(50));
  gets(lotto.winner);
 printf("%s\n\n",lotto.winner);

  Lotto lottos[MAX];

  for(int i=0;i<MAX;i++){
    lottos[i].date.year = rand()%6+2015;
    lottos[i].date.month = rand()%12+1;
    lottos[i].date.day = rand()%30+1;
    for(int j=0;j<6;j++){
      lottos[i].num[j] = rand()%49+1;
    }
    lottos[i].winner=names[i];
  }
  prLotto(lottos,MAX);

  return 0;
}
