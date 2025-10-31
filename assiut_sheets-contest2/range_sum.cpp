#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long
using namespace std;


ll rangeSum(ll L, ll R) {
    if(L > R) swap(L, R);
    ll sumR = R * (R + 1) / 2;
    ll sumL = (L - 1) * L / 2;
    return sumR - sumL;
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t;
      cin >> t;
      // int X;
      // cin >> X;
      ll l, r;
      

      while(t--) {
        cin >> l >> r;
        cout << rangeSum(l, r) << '\n';
    }

      return 0;
}
