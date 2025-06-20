#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
using namespace std;

void solve(int A[], int N)
{

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int counter = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[j] != A[j + 1]){
                counter++;
            }
        }
    }

    cout << counter;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1;
    // cin >> n;
    int N;
    cin >> N;
    int A[N];
    while (n--)
    {
       solve(A, N);
        // cout << solution;
    }

    return 0;
}

