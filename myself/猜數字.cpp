#include <stdio.h>

int main(){
int answer=21;
int guess;
while(guess>0){
printf("Please Enter your guess: ");
scanf("%d",&guess);
if(guess<answer){
    printf("Too low!\n");
}
if(guess>answer){
    printf("Too large!\n");
}
if(guess==answer){
    printf("Congraturations!");
    return 0;
}
}
return 0;
}
