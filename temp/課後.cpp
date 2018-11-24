#include <stdio.h>
struct Pos{
    int row;
    int col;

} ;
Pos findnextbestpos(int m[][8],int access[][8],int row,int col){
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextrow,nextcol;
    int min=9;
    int minrow=-1,mincol=-1;
    access[row][col]=0;
    for(int i=0;i<8;i++){
            nextrow=row+v[i];
            nextcol=col+h[i];
            if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && access[nextrow][nextcol]>0){
                access[nextrow][nextcol]--;
            if(access[nextrow][nextcol]<min){
                min=access[nextrow][nextcol];
                minrow=nextrow;
                mincol=nextcol;
            }

            }

    }
    pos.row=minrow;
    pos.col=mincol;
    return pos;

}
void pra(int m[][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("%2d ",m[i][j]);
        }
        printf("\n");
    }


}
 int main(){
     int str,stc,choice;
     int row,col;
     int m[8][8]={0};
     int moves =1;
    int access[8][8]={
         2, 3, 4, 4, 4, 4, 3, 2,
         3, 4, 6, 6, 6, 6, 4, 3,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         4, 6, 8, 8, 8, 8, 6, 4,
         3, 4, 6, 6, 6, 6, 4, 3,
         2, 3, 4, 4, 4, 4, 3, 2,
    };
    Pos pos;
    while(1){
 printf("1.Knight Tour by entering position\n2.Check 64 cases\n3.Exit\n");
 scanf("%d",&choice);
 if(choice==3)break;
 switch(choice)
 case 1:
     printf("Enter row and col for number 1:");
     scanf("%d %d",&str,&stc);
     m[str][stc]=1;
     for(int i=2;i<=64;i++){
        pos=findnextbestpos(m,access,row,col);
        if(pos.row==-1 && pos.col==-1){
            break;}else{
            m[pos.row][pos.col]=i;
            moves++;
            row=pos.row;
            col=pos.col;
            }
 }pra(m);
 printf("The tour ended with %d moves.",moves);
 printf("This was a full tour!");
    }
 }
// case 2:

