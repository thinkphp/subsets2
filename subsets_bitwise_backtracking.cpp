#include <iostream>
#include <fstream>

using namespace std;

int n, stack[100], level;

void init() {

   stack[ level ] = -1;
}

int succ() {
    if( stack[ level ] < 1 ) {
      stack[ level ]++;
      return 1;
    }
    return 0;
}

int valid() {
    return 1;
}

int sol() {
  return level == n;
}

void print() {
    for( int i = 1; i <= n; ++i ) {
        if( stack[ i ] == 1) {
          cout<<i<<" ";
        }
    }

    cout<<"\n";
}

void solve() {

   level = 1;
   init();

   while( level > 0 ) {
     int h,
         v;
     h = 1;
     v = 0;

     while( h && !v ) {

       h = succ();

       if( h ) {
         v = valid();
       }
     }

     if( h ) {

       if( sol() ) {

         print();

       } else {
         level++;
         init();
       }

     } else {

       level--;

     }

   }
}

int pow(int a, int b) {
    int p = 1;
    for(int i = 1; i <= b; ++i) {
      p = p * a;
    }
    return p;
}

int main(int argc, char const *argv[]) {

  n = 3;
  solve();
  cout<<"\n";

  int k = pow(2,n);

  for(int i = 1; i <= k-1; ++i) {

          for(int j = 0; j < n; ++j) {

              if((1<<j)&i) {

                cout<<j+1<<" ";
              }
          }
          cout<<"\n";
  }
  return 0;
}
