#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
#include <map> 
using namespace std;

bool first = false;
int digit = 0;
void solve(string n)
{
    if (digit == n.size())
    {
        digit = 0;
        cout << endl;
        first = false;
        return;
    }

    if(first){
        cout << " ";
    }
    first = true;

    cout << n[digit];
    digit++;
    return solve(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string N;
    while (n--)
    {
        cin >> N;
       solve(N);
        // cout << solution;
    }

    return 0;
}

