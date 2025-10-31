#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;
    int a[n], b[n];
    int c[2 * n];

    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    for(int i = 0; i < n; i++){
      cin >> b[i];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n){
      c[k] = b[i];
      i++;
      k++;
    }

    while(j < n){
      c[k] = a[j];
      j++;
      k++;
    }

    for(int i = 0; i < 2 * n; i++){
      cout << c[i] << " ";
    }
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
