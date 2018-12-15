#include <stdio.h>
struct List{
    int stunum
    char name;
    int ISBN;
    char bookna;
    int bordate;
    int retudate;

};

int main(){
    int choice;
    char bookna;
while(choice!=5){

    printf("圖書管理系統\n");
    printf("1.全部圖書訊息\n");
    printf("2.新增圖書訊息\n");
    printf("3.刪除圖書訊息\n");
    printf("4.借閱次數\n");
    printf("5.退出\n");
    printf("?");
    scanf("%d", &choice);
switch(choice){
    case 1:
    case 2:
    case 3:
    case 4:
        printf("請輸入書名:");
        scanf("%s",&bookna);
        printf("%s已被借閱%d次\n",bookna,);



}


}
}
