//http://www.spoj.com/problems/SAMER08F/

#include <iostream>

using namespace std;

unsigned long long squares(int n) {
  if (n == 0)
    return 0;
  return n * n + squares(n - 1); 
}

int main() {
  int n;
  while(true) {
    cin >> n;
    if (n == 0)
      break;
    cout << squares(n) << endl;
  }
  return 0;
}
