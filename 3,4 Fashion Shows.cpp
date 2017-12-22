#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int s;
    cin >> s;
    int m[s], w[s];
    
    for (int j = 0; j < s; ++j) {
      cin >> m[j];
    }
    
    for (int j = 0; j < s; ++j) {
      cin >> w[j];
    }
    sort(m, m + s);
    sort(w, w + s);
    int sum = 0;
    for (int j = 0; j < s; ++j) {
      sum += m[j] * w[j];
    }
    cout << sum << endl;
  }
  return 0;
}
