#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      ll l1, r1, l2, r2;
      cin >> l1 >> r1 >> l2 >> r2;

      ll left = max(l1, l2);
      ll right = min(r1, r2);

      if (left <= right)
            cout << left << " " << right;
      else
            cout << -1;
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
            solve();
      }

      return 0;
}
