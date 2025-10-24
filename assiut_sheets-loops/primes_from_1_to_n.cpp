#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
#include <map> 
using namespace std;


void solve(int n)
{
    for(int i = 2; i <= n; i++){
        bool flag = true;
        int j = i - 1;
        int division;
        while (j > 1){
            int division = i % j;
            if(division == 0){
                flag = false;
                break;
            }
            j--; 
        }
        if(flag){
            cout << i << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1;
    int N;
    cin >> N;
    
    while (n--)
    {
       solve(N);
        // cout << solution;
    }

    return 0;
}

