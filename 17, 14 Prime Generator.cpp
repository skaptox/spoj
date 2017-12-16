//http://www.spoj.com/problems/PRIME1/

#include <math.h>
#include <iostream>


using namespace std;
using ull = unsigned long long;

bool is_prime(ull num) {
  if (num <= 1) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;
  for (long long i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int t, m, n;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> m >> n;

    for (int j = m; j <= n; ++j) {
      if (is_prime(j))
        cout << j << '\n';
    }

    if (i != t-1) cout << '\n';
  }
  return 0;
}
