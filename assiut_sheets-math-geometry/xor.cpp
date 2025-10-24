#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      ll A, B, Q;
      cin >> A >> B >> Q;


      if(Q == 1){
            cout << A;
      }
      else if(Q == 2){
            cout << B;
      }

      else{
            ll XoR = A ^ B;
            ll sol = 0;
            for(ll i = 2; i < Q; i++){
                  sol = sol ^ XoR;
            }

            cout << sol;
      }
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n = 1;
      // cin >> n;
      // long N;
      // cin >> N;
      while (n--)
      {
            solve();
      }

      return 0;
}
