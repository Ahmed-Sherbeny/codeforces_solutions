#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
#include <map> 
using namespace std;


void solve(int x, int y)
{
    int count = 0;

    if (x < y){
        for(int i = x + 1; i < y; i++){
            if((i % 2) != 0){
                count += i;
            }
        }
    }

    else{
        for(int i = x - 1; i > y; i--){
            if((i % 2) != 0){
                count += i;
            }
        }
    }
    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n;
    
    while (n--)
    {
        cin >> x >> y;
       solve(x, y);
        // cout << solution;
    }

    return 0;
}

