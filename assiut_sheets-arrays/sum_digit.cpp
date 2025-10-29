#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
      int n;
      cin >> n;
    string number;
    cin >> number;

    int sum = 0;
    for(int i = 0; i < number.size(); i++){
      int num = number[i] - '0';
      sum += num;
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
