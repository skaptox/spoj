#include <iostream>
#include <string>

using namespace std;

string postfix(string str) {
  if (str.size() == 1)
    return str;
 
  str.erase(str.begin());
  str.pop_back();
  
  if (str.size() == 3) {
    swap(str[1], str[2]);
    return str;
  }
  
  int p = 0;
  int i = 0;
  
  while (i < str.size()) {
    if (str[i] == '(')
      p++;
    if (str[i] == ')')
      p--;
    if (p == 0)
      break;
    ++i;
  }
  
  i = str.find_first_of("+-*/^", i);
  string a = str.substr(0, i);
  string b = str.substr(i + 1);
  return postfix(a) + postfix(b) + str[i];
}

int main() {
  int t;
  cin >> t;
  string str;
  for (int i = 0; i < t; ++i) {
    cin >> str;
    cout << postfix(str) << endl;
  }
  return 0;
}
