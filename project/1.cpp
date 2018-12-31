#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#define MAX 10
struct Date
{
    int year;
    int month;
    int day;
};
struct Alist{
  char *id;
  char *borrower;
  char *ISBN;
  char *bookna;
  char *bordate;
  char *retudate;
};
void prAlist(Alist alists[]){
  for(int i=0;i<10;i++){
    printf("%s    ",alists[i].id);
    printf("%s    ",alists[i].borrower);
    printf("%s    ",alists[i].ISBN);
    printf("%s    ",alists[i].bookna);
    printf("%s      ",alists[i].bordate);
    printf("%s\n",alists[i].retudate);
  }

}
/* self-referential structure */
struct ListNode {
    int id;
    int stunum;
    Date borrow;
    Date bookreturn;
    char *name;             // lotto id
    char *bookname;
    //Date date;   // opening date
    //int num[6];         // winning numbers
    ListNode *nextPtr; /* pointer to next node*/
}; /* end structure listNode */
struct Borrow{
    char *ISBN;
};
/* self-referential structure */
/*struct ListNode {
   int data; /* each listNode contains a character */
   /*ListNode *nextPtr; /* pointer to next node*/
/*}; /* end structure listNode */

//typedef struct listNode ListNode; /* synonym for struct listNode */
typedef ListNode *ListNodePtr; /* synonym for ListNode* */

/* prototypes */
void insert( ListNodePtr *sPtr,  ListNode item );
int del( ListNodePtr *sPtr, ListNode item );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr ,ListNode item);
void instructions( void );
int leap(int year1){
    if((year1%4==0 && year1%100!=0)||year1%400==0)
        return 1;
    else
        return 0;

    }

int main( void )
{
   ListNodePtr startPtr = NULL; /* initially there are no nodes */
   int choice; /* user's choice */
   Borrow borrow;
   int times=0;
   int a=0;
   int year1,month1,day1,year2,month2,day2;
   int days,money;
   int total1=0,total2=0;;
   int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
   //int item; /* char entered by user */
   ListNode item;
   item.name=(char*)malloc(sizeof(char)*80);
   item.bookname=(char*)malloc(sizeof(char)*80);
   Alist alist;
  char *num[10]={"01","02","03","04","05","06","07","08","09","10"};
  char *names[10]={"Cecelia  ","Juliet   ","Raymond  ","Nahum    ","Bradford ","Lila     ","Van      ","Francisco","Hailey   ","Luis     "};
  char *isbn[10]={"101","102","103","104","105","106","107","108","109","110"};
  char *book[10]={"Charlotte¡¦s Web   ","Peter Pan          ","The Giver          ","Old Man and the Sea","Thirteen Reasons   ","The Outsiders      ","Number the Stars   ","A Wrinkle In Time  ","A List of Cages    ", "The Hate U Give    "};
  char *date1[10]={"2018/02/08","2018/09/23","2018/11/05","2018/12/19","2018/09/30","2018/06/12","2018/07/26","2018/10/10","2018/12/01","2018/11/11"};
  char *date2[10]={"2018/03/08","2018/10/23","2018/12/05","2019/01/19","2018/10/30","2018/07/12","2018/08/26","2018/01/10","2019/01/01","2018/12/11"};

  alist.id = (char *)malloc(sizeof(50));
  alist.borrower = (char *)malloc(sizeof(50));
  alist.ISBN = (char *)malloc(sizeof(50));
  alist.bookna = (char *)malloc(sizeof(50));
  alist.bordate = (char *)malloc(sizeof(50));
  alist.retudate = (char *)malloc(sizeof(50));

  Alist alists[MAX];
  char ISBN[10]={1};
  borrow.ISBN=(char *)malloc(sizeof(char)*80);

   instructions(); /* display the menu */
   printf( "? " );
   scanf( "%d", &choice );

   /* loop while user does not choose 3 */
   while ( choice != 6 ) {

      switch ( choice ) {
      case 1:
         printf("ID    Name         ISBN   Book Name            Booknorrow Date  Bookreturn Date\n");
  printf("\n");



  for(int i=0;i<MAX;i++){
    alists[i].id = num[i];
    alists[i].borrower = names[i];
    alists[i].ISBN = isbn[i];
    alists[i].bookna = book[i];
    alists[i].bordate = date1[i];
    alists[i].retudate = date2[i];
  }
  prAlist(alists);
  break;
         case 2:
            printf( "Enter ISBN: " );
            scanf( "\n%d", &item.id );
             a++;
            printf("Enter student ID: ");
            scanf("%d",&item.stunum);
            fflush(stdin);
            printf("Enter Student name: ");
            gets(item.name);
            fflush(stdin);
            printf("Enter BookName: ");
            gets(item.bookname);
            printf("Enter Book borrow date: ");
            scanf("%d %d %d",&item.borrow.year,&item.borrow.month,&item.borrow.day);

            insert( &startPtr, item ); /* insert item in list */
            printList( startPtr ,item);
            break;
         case 3:
            /* if list is not empty */
            if ( !isEmpty( startPtr ) ) {
               printf( "Enter ISBN to be deleted: " );
               scanf( "\n%d", &item.id );
               a--;


               /* if character is found, remove it */
               if ( del( &startPtr, item ) ) { /* remove item */
                  printf( "%d deleted.\n", item );
                  printList( startPtr,item );
               } /* end if */
               else {
                  printf( "%d not found.\n\n", item.id );
               } /* end else */
            } /* end if */
            else {
               printf( "List is empty.\n\n" );
            } /* end else */

            break;
         case 4:
           // printf("Please enter ISBN:");
           // scanf("%d",borrow.ISBN);
            //if(item.id<=110)
               // printf("This book is already borrow by 1 times.\n");

               // else if(borrow.ISBN==item.id ||borrow.ISBN ==alist.id)
                //times++;
    times=10+a;
            printf("There are %d books are borrowwd.\n",times);
            break;

        // default:
           // printf( "Invalid choice.\n\n" );
            instructions();
            break;
         case 5:
            printf("Enter borrow date:");
            scanf("%d %d %d",&year1,&month1,&day1);
            printf("Enter today:");
            scanf("%d %d %d",&year2,&month2,&day2);

            m[1]=28;
        total1=0;
        total2=0;
        if(leap(year1))m[1]++;
        for(int i=0;i<month1-1;i++)
            total1+=m[i];
            if(leap(year2))m[1]++;
        for(int i=0;i<month2-1;i++)
            total2+=m[i];
            days=(total2+day2)-(total1+day1);


        printf("%d days passed since %d/%02d/%02d.\n",days,year1,month1,day1);
            if(days<=31){
                printf("You don't need to pay.\n");
            }else if(days>31){

                printf("You have been already delayed %d days.\n",days-31);
                money=(days-31)*5;
                printf("So you need to pay %d dollars.\n",money);
            }break;


      } /* end switch */

      printf( "? " );
      scanf( "%d", &choice );
   } /* end while */

   printf( "End of run.\n" );
   return 0; /* indicates successful termination */
} /* end main */

/* display program instructions to user */
void instructions( void )
{
   printf("Library Management System\n");
    printf("1.All List\n");
    printf("2.Add List\n");
    printf("3.Delete List\n");
    printf("4.How many books are borrowed?\n");
    printf("5.How much fine you need to pay if overdued?\n");
    printf("6.Exit\n");
} /* end function instructions */

/* Insert a new value into the list in sorted order */
void insert( ListNode **sPtr, ListNode item )
{
   ListNodePtr newPtr; /* pointer to new node */
   ListNodePtr previousPtr; /* pointer to previous node in list */
   ListNodePtr currentPtr; /* pointer to current node in list */

   newPtr = (ListNode *) malloc( sizeof( ListNode ) ); /* create node */
   newPtr->name = (char*)malloc(sizeof(char));
   newPtr->bookname = (char*)malloc(sizeof(char));

   if ( newPtr != NULL ) { /* is space available */
      newPtr->id = item.id; /* place value in node */
      newPtr->stunum = item.stunum;
      newPtr->borrow.year=item.borrow.year;
      newPtr->borrow.month=item.borrow.month;
      newPtr->borrow.day=item.borrow.day;
      newPtr->bookreturn.year=item.bookreturn.year;
      newPtr->bookreturn.month=item.bookreturn.month;
      newPtr->bookreturn.day=item.bookreturn.day;

      strcpy(newPtr->name,item.name);
      strcpy(newPtr->bookname,item.bookname);
      newPtr->nextPtr = NULL; /* node does not link to another node */

      previousPtr = NULL;
      currentPtr = *sPtr;

      /* loop to find the correct location in the list */
      while ( currentPtr != NULL && item.id > currentPtr->id ) {
         previousPtr = currentPtr; /* walk to ...   */
         currentPtr = currentPtr->nextPtr; /* ... next node */
      } /* end while */

      /* insert new node at beginning of list */
      if ( previousPtr == NULL ) {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } /* end if */
      else { /* insert new node between previousPtr and currentPtr */
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } /* end else */
   } /* end if */
   else {
      printf( "%d not inserted. No memory available.\n", item.id );
   } /* end else */
} /* end function insert */

/* Delete a list element */
int del( ListNodePtr *sPtr, ListNode item )
{
   ListNodePtr previousPtr; /* pointer to previous node in list */
   ListNodePtr currentPtr; /* pointer to current node in list */
   ListNodePtr tempPtr; /* temporary node pointer */

   /* delete first node */
   if ( item.id == ( *sPtr )->id ) {
      tempPtr = *sPtr; /* hold onto node being removed */
      *sPtr = ( *sPtr )->nextPtr; /* de-thread the node */
      free( tempPtr ); /* free the de-threaded node */
      return item.id;
   } /* end if */
   else {
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;

      /* loop to find the correct location in the list */
      while ( currentPtr != NULL && currentPtr->id != item.id ) {
         previousPtr = currentPtr; /* walk to ...   */
         currentPtr = currentPtr->nextPtr; /* ... next node */
      } /* end while */

      /* delete node at currentPtr */
      if ( currentPtr != NULL ) {
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
         return item.id;
      } /* end if */
   } /* end else */

   return '\0';
} /* end function delete */

/* Return 1 if the list is empty, 0 otherwise */
int isEmpty( ListNodePtr sPtr )
{
   return sPtr == NULL;
} /* end function isEmpty */

/* Print the list */
void printList( ListNodePtr currentPtr ,ListNode item)
{
   /* if list is empty */
   if ( currentPtr == NULL ) {
      printf( "List is empty.\n\n" );
   } /* end if */
   else {
      printf( "The list is:\n" );

      /* while not the end of the list */
      while ( currentPtr != NULL ) {
          if(currentPtr->borrow.month==12){
            item.bookreturn.year=currentPtr->borrow.year+1;
            item.bookreturn.month=currentPtr->borrow.month-11;
            item.bookreturn.day=currentPtr->borrow.day;
          }else{
        item.bookreturn.year=currentPtr->borrow.year;
        item.bookreturn.month=currentPtr->borrow.month+1;
        item.bookreturn.day=currentPtr->borrow.day;}
        printf("--> \n");
         printf( "ISBN:%d ,BookName:%s \nBookborrow Date:%4d/%02d/%02d ,Bookreturn Date:%4d/%02d/%02d\nStudent ID:%d ,Student Name:%s \n" , currentPtr->id,currentPtr->bookname, currentPtr->borrow.year,currentPtr->borrow.month,currentPtr->borrow.day,item.bookreturn.year,item.bookreturn.month,item.bookreturn.day,currentPtr->stunum,currentPtr->name);
         currentPtr = currentPtr->nextPtr;
      } /* end while */

      printf( "NULL\n\n" );
   } /* end else */
} /* end function printList */



/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

