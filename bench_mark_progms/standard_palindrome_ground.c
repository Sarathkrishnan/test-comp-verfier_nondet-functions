extern void abort(void);
#include <assert.h>
#include<stdio.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 4



int main( ) {
  int A[N];
//  int B[N];
  int i;
	for (i = 0; i < N ; i++ ) {
    A[i] = __VERIFIER_nondet_int();
    printf("%d\n",A[i]);
   // B[i] = __VERIFIER_nondet_int();
  
  }
  for (i = 0; i < N/2 ; i++ ) {
    A[i] = A[N-i-1];
   // B[I]
  }
  
  int x;
  for ( x = 0 ; x < N/2 ; x++ ) {
    __VERIFIER_assert(  A[x] == A[N - x - 1]  );
    //__VERIFIER_assert(  1 == 1); 
  }
  return 0;
}
