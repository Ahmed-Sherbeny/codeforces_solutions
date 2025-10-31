#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> freq(1001, 0);

    for(int i = 0; i < n; i++){
      cin >> arr[i];
      freq[arr[i]]++;
    }

    int count = 0;
    int elem;
    for(int i = 0; i < n; i++){
      elem = arr[i] + 1;
      if(freq[elem] > 0){
            count++;
      }
    }

    cout << count;
    
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
