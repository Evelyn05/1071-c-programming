#include <stdio.h>
int main(){
    int L;
char road, state;
int position, distance;
while( scanf( "%d", &L ) != EOF && L ){
getchar();
state = '.';
position = -1;
distance = 2000001;
for( int i = 0 ; i < L ; i++ ){
road = getchar();
if( road == 'Z' ) distance = 0;
if( road != '.' ){
if( state != road && state != '.' )
if( i - position < distance ) distance = i - position;
state = road;
position = i;
}
}
printf( "%d\n", distance );
}
return 0;
}
