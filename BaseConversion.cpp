#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map> 
using namespace std;

void solve(long long n)
{
    if (n == 0)
    {
        return;
    }

    solve(n / 2);
    cout << n % 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long N;
    while (n--)
    {
        cin >> N;
       solve(N);
        cout << '\n';
    }

    return 0;
}

