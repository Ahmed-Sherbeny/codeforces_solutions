#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

ll solve(){
    int x, n;
    cin >> x >> n;

    ll sum = 0;
    if(n % 2 == 0){
      for(int i = 2; i <= n; i += 2){
            sum += pow(x, i);
      }
    }

    else{
      for(int i = 2; i < n; i += 2){
            sum += pow(x, i);
      }
    }

    return sum;
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n = 1;
      // cin >> n;
      // double X;
      // cin >> X;

      while (n--)
      {
            cout << solve();
      }

      return 0;
}
