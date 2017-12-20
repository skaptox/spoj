#include <iostream>

using namespace std;

using Ull = unsigned long long;

int main() {
  int t;
  cin >> t;
  
  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;
    Ull sum = 0;
    for (int j = 0; j < n; ++j) {
      Ull c;
      cin >> c;
      sum += c % n;
    }
    
    if (sum % n == 0)
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;
  }
  return 0;
}
