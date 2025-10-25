#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(int N, int M){
      ll sum = N;

      bool first = true;
      if(N <= M){
            cout << sum << " ";
            for(ll i = N + 1; i <= M; i++){
                  sum += i;
                  if(!first){
                        cout << " ";
                  }
                  first = false;

                  cout << i;
            }
            cout << " sum =" << sum << '\n';
      }
      else{
            first = true;
            ll j = M;
            ll last_val = N;
            for(ll i = N - 1; i >= M; i--){
                  sum += i;
                  if(!first){
                        cout << " ";
                  }
                  first = false;

                  cout << j;
                  j++;
            }

            cout << " " << last_val;
            cout << " sum =" << sum << '\n';
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

      int N, M;
      while (cin >> N >> M)
      {
            if (N <= 0 || M <= 0) break;
            solve(N, M);
      }

      return 0;
}
