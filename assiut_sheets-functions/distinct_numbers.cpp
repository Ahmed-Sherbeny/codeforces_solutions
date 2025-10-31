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
    const int OFFSET = 1000;        // to account for negative indices
    vector<int> freq(2001, 0);

    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
      freq[arr[i] + OFFSET]++;
    }

    int distinct = 0;
    for(int i = 0; i < 2001; i++){
      if(freq[i] > 0){
            distinct++;
      }
    }

    cout << distinct;
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
