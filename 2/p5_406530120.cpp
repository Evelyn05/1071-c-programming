#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

typedef struct Grade{
   int studID;   // student ID
   char *name;
   int midterm;
   int final;
   float termGrade;  // termGrade = 0.5 * midterm + 0.5 * final;
   struct Grade *next;
}grade;

void add(struct Grade **grades, int i){
   grade *newnode=(grade *)malloc(sizeof(grade));
   char *names[] = {"Abel Chen", "Ben Lin",
   "Benny Pan", "John Hsu", "Jack Jian",
   "Tony Chung", "Hanry Xiao", "Jason Wang",
   "Jonson Wu", "Larry Tsai"};

   newnode->studID = rand()%1000+402310000;
   newnode->name = names[rand()%10];
   newnode->midterm = rand()%50+51;
   newnode->final = rand()%50+51;
   newnode->next=NULL;
   if(i==0)
   *grades = newnode;
   else{
    grade *current=*grades,*pre=NULL;
    while(current!=NULL){
        if(current->studID >= newnode->studID)
            break;
        else{
            pre=current;
            current=current->next;
        }
    }
    if(pre==NULL && current !=NULL){
        newnode->next=current;
        *grades=newnode;
    }
    else if(pre!=NULL&& current !=NULL){
        pre->next = newnode;
         newnode->next = current;
    }
    else{
         pre->next = newnode;
      }
   }
}

void computeTermGrade(struct Grade *current, int count){
   int i;

   for(i=0; i<count; i++){
      current->termGrade = ((float)current->midterm+
         (float)current->final)*0.5;
         current=current->next;
   }
}

void showGrades(struct Grade *current, int count){
   int i;

   for(i=0; i<count; i++){
      printf("id: %d, Name: %s, midterm: %d, final: %d, term grade: %.1f\n",
         current->studID, current->name, current->midterm,
         current->final, current->termGrade);
         current=current->next;
   }
}

int main(){
   srand(time(NULL));
   int count = 0;
   struct Grade *grades;
   int N;
   printf("Enter N: ");
   scanf("%d", &N);
   printf("Generating %d grades ...\n\n", N);
   for(int i=0;i<N;i++){
     add(&grades, i);
   count++;
}
   computeTermGrade(grades,count);  // compute term grade
   showGrades(grades,count);
   return 0;
}
