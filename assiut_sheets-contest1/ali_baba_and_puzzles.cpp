#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      ll a, b, c, d;
      cin >> a >> b >> c >> d;

      vector<ll> nums = {a, b, c};

      sort(nums.begin(), nums.end());
      char ops[3] = {'+', '-', '*'};

      do {
            for (int i = 0; i < 3; i++) {
                  for (int j = 0; j < 3; j++) {
                        if(i == j){
                              continue;
                        }
                        ll left, right;

                        // (nums[0] op1 nums[1]) op2 nums[2]
                        if (ops[i] == '+') left = nums[0] + nums[1];
                        else if (ops[i] == '-') left = nums[0] - nums[1];
                        else left = nums[0] * nums[1];

                        if (ops[j] == '+') right = left + nums[2];
                        else if (ops[j] == '-') right = left - nums[2];
                        else right = left * nums[2];

                        if (right == d) {
                              cout << "YES\n";
                              return;
                        }

                        // nums[0] op1 (nums[1] op2 nums[2])
                        if (ops[j] == '+') right = nums[1] + nums[2];
                        else if (ops[j] == '-') right = nums[1] - nums[2];
                        else right = nums[1] * nums[2];

                        if (ops[i] == '+') left = nums[0] + right;
                        else if (ops[i] == '-') left = nums[0] - right;
                        else left = nums[0] * right;

                        if (left == d) {
                              cout << "YES\n";
                              return;
                        }
                  }
            }
      } while (next_permutation(nums.begin(), nums.end()));

      cout << "NO\n";
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
