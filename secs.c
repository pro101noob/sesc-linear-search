#include <stdio.h>

int main(void) {

  //declaration
  int N, K = -1;

  //reading
  scanf("%d%d", &N, &K);
  int arrr[N-1];
  for ( int i=0; i<N+1; i++ ) { scanf("%d", &arrr[i]); }

  //other shitful code
  int first, last;
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
  printf("%d %d", first-1, last-1);

  return 0;
}
