#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(int N, int M){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(a == b && a == c & a == d){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n;
      cin >> n;
      // double X;
      // cin >> X;

      int N, M;
      while (cin >> N >> M)
      {
            solve(N, M);
      }

      return 0;
}
