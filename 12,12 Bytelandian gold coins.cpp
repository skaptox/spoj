#include <iostream>
#include <unordered_map>
#include <limits>
#include <map>

using namespace std;

using Ull = unsigned long long;

unordered_map<Ull, Ull> dict;

Ull max_dolar(Ull coin) {
  if (dict.find(coin) != dict.end())
    return dict[coin];
    
  Ull m = coin / 2;
  Ull t = coin / 3;
  Ull q = coin / 4;
  
  Ull r;
  if (m + t + q > coin)
    r = max_dolar(m) + max_dolar(t) + max_dolar(q);
  else 
    r = coin;
  dict[coin] = r;
  return r;
}

int main() {
  Ull n;
  while(cin >> n) {
    cout << max_dolar(n) << endl;
  }
  return 0;
}
