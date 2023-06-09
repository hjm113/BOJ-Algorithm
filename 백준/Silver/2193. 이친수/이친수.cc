#include <iostream>
#include <queue>
#include <stack>
#include <tuple>
#include <deque>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
using ll = long long;
#define X first
#define Y second
long long dp[1005];
int n, m;
int t;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  dp[1] = 1;
  dp[2] = 1;
  for(int i = 3; i <= n; i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }
  cout << dp[n];
}