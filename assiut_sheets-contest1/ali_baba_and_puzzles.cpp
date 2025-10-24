#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      ll a, b, c, d;

      cin >> a >> b >> c >> d;

      char op[3] = {'+', '-', '*'};


      ll sol;
      for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                  ll left, right;


                  // (a op 1 b) op 2 c
                  if(op[i] == '+'){
                        left = a + b;
                  }
                  else if(op[i] == '-'){
                        left = a - b;
                  }
                  else{
                        left = a * b;
                  }

                  if(op[j] == '+'){
                        right = b + c;
                  }
                  else if(op[j] == '-'){
                        right = b - c;
                  }
                  else{
                        right = b * c;
                  }

                  if(right == d){
                        cout << "YES";
                        return;
                  }

                  // a op1 (b op 2 c)
                  if(op[j] == '+'){
                        right = b + c;
                  }
                  else if(op[j] == '-'){
                        right = b - c;
                  }
                  else{
                        right = b * c;
                  }

                  if(op[i] == '+'){
                        left = a + right;
                  }
                  else if(op[i] == '-'){
                        left = a - right;
                  }
                  else{
                        left = a * right;
                  }

                  if(left == d){
                        cout << "YES";
                        return;
                  }

            }
      }

      cout << "NO";
      return;
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
