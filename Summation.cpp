#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map> 
using namespace std;

long long arr[1000];
long long Sum = 0;
long long solve(long long n)
{
    if(n < 0){
        return Sum;
    }

    Sum += arr[n]; 

    return solve(n - 1);
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
       cout << solve(N);
    }

    return 0;
}

