#include <stdio.h>
struct List{
    int stunum;
    char name;
    char bookna;
    int ISBN;
    int bordate;
    int retudate;

};

//int borrowtimes()
int main(){
    List lists;
    int stunum[10]={01,02,03,04,05,06,07,08,09,10};
    int ISBN[10]={101,102,103,104,105,106,107,108,109,110};
    char bookna[10]={Charlotte’s Web,Peter Pan,The Giver,The Old Man and the Sea,Thirteen Reasons Why,The Outsiders,Number the Stars,A Wrinkle In Time,A List of Cages, The Hate U Give};
    int bordate[10={};
    int retudate[10]={};
    int choice;
    char bookna;
    int times=0;
while(choice!=5){

    printf("Library Management System\n");
    printf("1.All List\n");
    printf("2.Add List\n");
    printf("3.Delete List\n");
    printf("4.Borrow times\n");
    printf("5.Exit\n");
    printf("?");
    scanf("%d", &choice);
switch(choice){
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Please Enter Bookname:");
        scanf("%s",&bookna);
        if(bookna==List[10] ||bookna==alist){
            times++;
        }
        printf("%s is already borrow by %d times.\n",bookna,times);



}


}
}
