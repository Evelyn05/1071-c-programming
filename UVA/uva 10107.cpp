#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int N[10005], top = 0, temp;
  while( scanf( "%d", &N[top++] ) != EOF ){
    for( int i = 0 ; i < top ; i++ )
      if( N[top-1] > N[i] ){
        temp = N[top-1];
        for( int j = top-1 ; j > i ; j-- )
          N[j] = N[j-1];
        N[i] = temp;
        break;
      }
      if( top % 2 )
        printf( "%d\n", N[top/2] );
      else
        printf( "%d\n", (N[top/2]+N[top/2-1])/2 );
  }
  return 0;
}
