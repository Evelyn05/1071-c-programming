#include<stdio.h>
#define MAX 100

struct Grade{
   int studID;   // student ID
   char *name;
   int midterm;
   int final;
   float termGrade;  // termGrade = 0.5 * midterm + 0.5 * final;
};

/* main() 如非必要，請勿更動 */
int main(){
   int count = 0;
   Grade grades[MAX];
   int N;
   char *names[] = {"Abel Chen", "Ben Lin", "Benny Pan", "John Hsu", "Jack Jian", "Tony Chung", "Hanry Xiao", "Jason Wang", "Jonson Wu", "Larry Tsai"}
   printf("Enter N: ");
   scanf(“%d”, &N);
  printf("Generating %d grades ...\n\n", );
   for(int i=0;i<N;i++){
     add(grades, i);
count++;
}
   computeTermGrade(grades,count);  // compute term grade
   showGrades(grades,count);
   printf("Coding by 1B-406530120");
   return 0;
}
