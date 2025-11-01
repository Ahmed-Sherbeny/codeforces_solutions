#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    int x;
    int sum_digit;
    int digit;

    vector<int> arr;
      for(int i = a; i <= n; i++){
            x = i;
            sum_digit = 0;
            while(x > 0){
                  digit = x % 10;
                  sum_digit += digit;

                  x /= 10;
            }
            if(sum_digit >= a && sum_digit <= b){
                  arr.push_back(i);
            }


      }

      ll sum = 0;

      for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
      }

      cout << sum;

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
