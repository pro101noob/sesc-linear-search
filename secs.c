#include <stdio.h>

int main(void) {

  //declaration----------
  int N, K;

  //reading--------------
  if ( scanf("%d%d", &N, &K) != 2 ) { printf("%d %d", -1, -1); return 0; };
  if ( N <= 0 ) { printf("%d %d", -1, -1); return 0; }
  int arrr[N];
  for ( int i=0; i<N; i++ ) { scanf("%d", &arrr[i]); }
  //for ( int i=0; i<=N-1; i++ ) { printf("%d", arrr[i]); }

  //other shitful code---
  int first = -1, last = -1;
  for ( int i=0, b=1; i<=N && b; i++ ) { 
    if ( arrr[i] == K ) { 
      first = i;
      b=0;
    } 
  }
  for ( int i=N, b=1; i>=0 && b; i-- ) {
    if ( arrr[i] == K ) {
      last = i;
      b=0;
    }
  }
  printf("%d %d", first, last);

  return 0;
}
