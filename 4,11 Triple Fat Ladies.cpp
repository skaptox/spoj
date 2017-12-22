//http://www.spoj.com/problems/EIGHTS/

#include <iostream>
#include <math.h>
using namespace std;

using ull = unsigned long long;

ull cube(ull k) {
  ull sol = 192 + (k - 1) * 250;
  return sol;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    ull k;
    cin >> k;
    cout << cube(k) << endl;
  }
  return 0;
}