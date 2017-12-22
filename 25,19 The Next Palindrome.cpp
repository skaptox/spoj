//http://www.spoj.com/problems/PALIN/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string add_one(string str) {
  int i = str.size() - 1;
  str[i] += 1;
  while(i >= 1 && str[i] == '9' + 1) {
    str[i] = '0';
    if(i - 1 >= 0)
    str[i-1] += 1;
    i--;
  }
  if (str[0] == '9' + 1) {
    str[i] = '0';
    str.insert(str.begin(), '1');
  }
  return str;
}

string next(string &str) {
  str = add_one(str);
  int m = str.size() / 2;
  string a = str.substr(0, m);
  m += str.size() & 1;
  string b = str.substr(m);
  string c(a.rbegin(), a.rend());
  int i = 0;
  
  string sol;
  if (str.size() % 2 == 0) {
    if (c >= b) {
      sol = a + c;
    } else {
      a = add_one(a);
      sol = a + string(a.rbegin(), a.rend());
    }
  } else {
    char h = str[m-1]; // Middle char
    if (c >= b) {
      sol = a + h + c;
    } else {
      a = add_one(a + h);
      sol = a + string(a.rbegin() + 1, a.rend());
    }
  }
  return sol;  
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string str;
    cin >> str;
    cout << next(str) << endl;
  }
  return 0;
}
