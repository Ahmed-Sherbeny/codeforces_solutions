#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map> 
using namespace std;

int arr[1000];
bool first = false;
void solve(long long n)
{
    if(n < 0){
        return;
    }

    if(first){
        cout << " ";
    }
    first = true;

    cout << arr[n];
    return solve(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1;
    long long N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    while (n--)
    {
       if(N % 2 == 0){
        solve(N - 2);
       }
       else{
        solve(N - 1);
       }
    }

    return 0;
}

