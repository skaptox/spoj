#include <iostream>

using namespace std;

int rectangles(int n) {
  int dp[n + 1];
  dp[0] = 0;

  for(int i = 1; i <= n; ++i){
    dp[i] = dp[i-1] + 1;
    for(int j = 2; j*j <= i;++j){
      if(i % j == 0)
        dp[i] += 1;
    }
  }
  return dp[n];
}

int main() {
  int n;
  while(cin>>n){
    cout<<rectangles(n)<<endl;
  }
}
