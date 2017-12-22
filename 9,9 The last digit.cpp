//http://www.spoj.com/problems/LASTDIG/

#include <iostream>
#include <math.h>
using namespace std;

int last(int b, long e) {
  if (e == 0 || b == 1)
    return 1;

  int l[4];

  for (int i = 0; i < 4; ++i) {
    l[i] = fmod(pow(b,i + 1), 10);
  }
  int i = (e % 4) - 1;
  if (i == -1)
    i = 3;
  return l[i];
}

int main() {
  int n;
  cin >> n;
  int b;
  long e;
  for (int i = 0; i < n; ++i) {
    cin >> b >> e;
    cout << last(b, e) << endl;
  }
  return 0;
}