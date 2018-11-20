#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Pos{
    int row;
    int col;

};
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
    int m[8][8]={0};
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
    int moves =1;
    srand(time(NULL));
    int row =rand()%8;
    int col =rand()%8;
    m[row][col]=1;
    printf("1: (row,col)=(%d,%d)\n",row,col);
    for(int i=2;i<=64;i++){
        pos=findnextbestpos(m,access,row,col);

        if(pos.row==-1 && pos.col==-1){
            break;
        }else{
            m[pos.row][pos.col]=i;
            moves++;
            row=pos.row;
            col=pos.col;

        }
    }
    pra(m);
    printf("\nTotal moves: %d\n",moves);

}
