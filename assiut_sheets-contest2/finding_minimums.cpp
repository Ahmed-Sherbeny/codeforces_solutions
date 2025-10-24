#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      long n, k;
      cin >> n >> k;

      ll arr[n];

      for(ll i = 0; i < n; i++){
            cin >> arr[i];
      }

      ll Min = arr[0];
      for(ll i = 0; i < n; i++){
            if(arr[i] < Min){
                  Min = arr[i];
            }

            if((i + 1) % k == 0){
                  if((i + 1) % k == 0 && (i + 1) == n){
                        cout << Min;
                        return;
                  }
                  cout << Min << " ";
                  Min = arr[i + 1];
            }
            else if((i + 1) % k != 0 && (i + 1) == n){
                  cout << Min;
            }
      }
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
