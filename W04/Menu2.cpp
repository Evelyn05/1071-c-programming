#include <stdio.h>
void prchar(char C,int n){
    for(int i=1;i<=n;i++)
    printf("%c",C);
}
int i;
void drawRect(int height,int width,int filled)
{
    if(filled){
        for(int i=1; i<=height; i++){
           prchar('*',i);
           printf("\n");
        }
    }else{
        for(int j=1; j<=width; j++){
            if(i==1 || i==height || j==1 || j==width)
               prchar('*',i);

        }else{
            printf("*");
            prcharf(' ',i-2);
            printf("*");
            }
            printf("\n");
}

void drawVertri(int height,int type,int filled)
{


        switch(type)
        {
        case 1:
            if(filled){
                for(int i=1; i<=height; i++){
                    prchar('*',i);
                    printf("\n");
                    }
                }else{
                    for(int i=1; i<=height; i++){
                        if(i==1||i==height){
                            prchar('*',i);
                        }else{
                         printf("*");
                         prchar(' ',i-2);
                         printf("*");
                        }
                        printf("\n");
                    }

                }
                break;

        }
}

        int main()
        {

            int choice;
            int height;
            int width;
            int type;
            int filled;
            while(1)
            {
                printf("Main menu\n");
                printf("1. Rectangle\n");
                printf("2. Vertical Triangle\n");
                printf("3. Exit\n");
                printf("=> ");
                scanf("%d", &choice);
                if(choice==3)break;
                switch(choice)
                {
                case 1:
                    printf("Enter height and width: ");
                    scanf("%d %d", &height,&width);
                    drawRect(height,width);
                }
                break;
            case 2:
                printf("Enter height and type: ");
                scanf("%d %d", &height,&type);
                drawVertri(height,type,filled);
            }


        }

        return 0;



