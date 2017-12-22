#include <iostream>
#include <numeric>
#include <algorithm>
#include <math.h>


using namespace std;

int moves(int *c, int n) {
   double prom = 0;
   prom = accumulate(c, c + n, prom) / n;
   int times = 0;
   if (fmod(prom, 1) == 0) {
     for (int i = 0; i < n; ++i) {
       if (c[i] > prom)
         times += c[i] - prom;
     }
   } else {
     times = -1;
   }
   return times;
}

int main() {
  int n;
  while(true) {
    cin >> n;
    if (n == -1) 
      break;
    int c[n];
    
    for(int i = 0; i < n; ++i) {
      cin >> c[i];
    }
    cout << moves(c, n) << endl;
  }
  return 0;
}
