//http://www.spoj.com/problems/TOANDFRO/

#include <iostream>
#include <string>

using namespace std;

string to_and_fro(string &str, int c) {
  int i;
  int j;
  
  string text;
  
  for (int k = 0; k < c; ++k) {
    i = k;
    j = c + (c - k) - 1;
    
    while(i < str.size()) {
      text += str[i];
      
      if (j < str.size())
        text += str[j];
      i += 2 * c;
      j += 2 * c;
    }
  }
  return text;
}

int main() {
  int c;
  string str;
  while ((cin >> c) && c != 0) {
    cin >> str;
    cout << to_and_fro(str, c) << endl;
  }
  return 0;
}
