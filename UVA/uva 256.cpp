#include <stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
            if(n==2){

                for(int i=0;i<10;i++){
                    for(int j=0;j<10;j++){
                        if((i+j)*(i+j)==(i*10+j)){
                           printf("%02d\n",(i+j)*(i+j));

                           }

                    }
                }
            }
            if(n==4){
                     for(int i=0;i<100;i++){
                        for(int j=0;j<100;j++){
                           if((i+j)*(i+j)==(((i/10)*1000)+((i%10)*100)+j)){
                           printf("%04d\n",(i+j)*(i+j));
                        }
                     }

            }



        } if(n==6){
                        for(int i=0;i<1000;i++){
                            for(int j=0;j<1000;j++){
                               if((i+j)*(i+j)==(((i/100)*100000)+(((i%100)/10)*10000)+((i%100%10)*1000)+j)){
                               printf("%06d\n",(i+j)*(i+j));
                            }
                         }

                }
        }
        if(n==8){
                        for(int i=0;i<10000;i++){
                            for(int j=0;j<10000;j++){
                               if((i+j)*(i+j)==(((i/1000)*10000000)+(((i%1000)/100)*1000000)+((i%1000%100)/10*100000)+(i%1000%100%10)*10000+j)){
                               printf("%08d\n",(i+j)*(i+j));
                            }
                         }

                }
        }
    }
return 0;
}
