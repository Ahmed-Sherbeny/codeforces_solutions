#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;


void solve(){
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);

    int base_k = k;

    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<ll>());

    ll sum = 0;
    for(int i = 0; i < k; i++){
      if(arr[i] > 0){
            sum += arr[i];
      }
      else{
            break;
      }
    }

    cout << sum;
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n = 1;
      // cin >> n;
      // int X;
      // cin >> X;
      
      while (n--)
      {
            solve();
      }

      return 0;
}
