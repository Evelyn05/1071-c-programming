/* Fig. 12.3: fig12_03.c
   Operating and maintaining a list */
#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int year;
    int month;
    int day;
};

/* self-referential structure */
struct ListNode {
    int id;             // lotto id
    Date birth;
    char *name;
    //Date date;   // opening date
    //int num[6];         // winning numbers
    ListNode *nextPtr; /* pointer to next node*/
}; /* end structure listNode */
/* self-referential structure */
/*struct ListNode {
   int id; each listNode contains a character
   ListNode *nextPtr;  pointer to next node
};  end structure listNode
*/

//typedef struct listNode ListNode; /* synonym for struct listNode */
typedef ListNode *ListNodePtr; /* synonym for ListNode* */

/* prototypes */
void insert( ListNodePtr *sPtr, ListNode value );
int del( ListNodePtr *sPtr, ListNode value );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );

int main( void )
{
   ListNodePtr startPtr = NULL; /* initially there are no nodes */
   int choice; /* user's choice */
   //int item; /* char entered by user */
   ListNode item;
   instructions(); /* display the menu */
   printf( "? " );
   scanf( "%d", &choice );
   item.name=(char *)malloc(sizeof(char)*80);

   /* loop while user does not choose 3 */
   while ( choice != 3 ) {

      switch ( choice ) {
         case 1:
            printf( "Enter a id: " );
            scanf( "\n%d", &item.id );
            printf( "Enter a birthday: ");
            scanf( "%d %d %d", &item.birth.year,&item.birth.month,&item.birth.day );
            fflush(stdin);
            printf( "Enter name: ");
            gets(item.name);
            insert( &startPtr, item ); /* insert item in list */
            printList( startPtr );
            break;
         case 2:
            /* if list is not empty */
            if ( !isEmpty( startPtr ) ) {
               printf( "Enter id to be deleted: " );
               scanf( "\n%d", &item );

               /* if character is found, remove it */
               if ( del( &startPtr, item ) ) { /* remove item */
                  printf( "%d deleted.\n", item );
                  printList( startPtr );
               } /* end if */
               else {
                  printf( "%d not found.\n\n", item );
               } /* end else */
            } /* end if */
            else {
               printf( "List is empty.\n\n" );
            } /* end else */

            break;
         default:
            printf( "Invalid choice.\n\n" );
            instructions();
            break;
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
   printf( "Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.\n" );
} /* end function instructions */

/* Insert a new value into the list in sorted order */
void insert( ListNode **sPtr, ListNode item )
{
   ListNodePtr newPtr; /* pointer to new node */
   ListNodePtr previousPtr; /* pointer to previous node in list */
   ListNodePtr currentPtr; /* pointer to current node in list */

   newPtr = (ListNode *) malloc( sizeof( ListNode ) ); /* create node */

   if ( newPtr != NULL ) { /* is space available */
      newPtr->id = item.id; /* place value in node */
      newPtr->nextPtr = NULL; /* node does not link to another node */
      newPtr->birth.year= item.birth.year;
      newPtr->birth.month= item.birth.month;
      newPtr->birth.day= item.birth.day;
      newPtr->name= item.name;
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
void printList( ListNodePtr currentPtr )
{
   /* if list is empty */
   if ( currentPtr == NULL ) {
      printf( "List is empty.\n\n" );
   } /* end if */
   else {
      printf( "The list is:\n" );

      /* while not the end of the list */
      while ( currentPtr != NULL ) {
         printf( "--> \n");
         printf( "id=%d, birthday=%4d/%02d/%02d, name=%s\n", currentPtr->id,currentPtr->birth.year,currentPtr->birth.month,currentPtr->birth.day,currentPtr->name );
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
