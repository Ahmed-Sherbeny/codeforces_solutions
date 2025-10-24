#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(long N){

      if (N == 0) {
            cout << 0;
            return;
      }
      int digit;
      
      bool first = true;
      while (N > 0) {
        int digit = N % 10;
        if (!first) cout << " ";
        cout << digit;
        first = false;
        N /= 10;
    }
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n;
      cin >> n;
      long N;
      while (n--)
      {
            cin >> N;
            solve(N);
            if(n == 0){
                  return 0;
            }
            cout << '\n';
      }

      return 0;
}
