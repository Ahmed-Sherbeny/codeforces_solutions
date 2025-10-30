#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      int n;
      cin >> n;

      int arr[n];
      for(int i = 0; i < n; i++){
            cin >> arr[i];
      }

      int ops = 0;
      for(int i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                  cout << ops;
                  return;
            }

            arr[i] /= 2;
      }
      
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n;
      cin >> n;
      // double X;
      // cin >> X;

      while (n--)
      {
            solve();
      }

      return 0;
}
