#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;


    int freq1[26] = {0}, freq2[26] = {0};

    for(int i = 0; i < n; i++){
      freq1[s[i] - 'a']++;
      freq2[t[i] - 'a']++;
    }

    
    if(s.size() != t.size()){
          cout << "NO\n";
          return;
    }

    for(int i = 0; i < 26; i++){

      if(freq1[i] != freq2[i]){
            cout << "NO\n";
            return;
      }
      
    }

    cout << "YES\n";

}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n;
      cin >> n;
      // double X;
      // cin >> X;

      while (n--)
      {
            solve();
      }

      return 0;
}
