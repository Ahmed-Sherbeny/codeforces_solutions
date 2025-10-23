#include <bits/stdc++.h>
#include <string.h>
#include <cctype>
#include <map> 
using namespace std;

int fibonacci(int n){
    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }
    
   int a = 0, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}



void solve(int n)
{
    int number = fibonacci(n);
    bool flag = true;

    if(number <= 1){
        cout << "not prime" << '\n';
        return;
    }

    for(int i = 2; i <= number / 2; i++){
        if(number % i == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "prime" << '\n';
    }
    else if (!flag){
        cout << "not prime" << '\n';
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int N;
    cin >> n;
    
    while (n--)
    {
        cin >> N;
       solve(N);
        // cout << solution;
    }

    return 0;
}

