#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <map>
#define ll long long

using namespace std;

bool isPalindrome(int num){
      int bits = floor(log2(num)) + 1;

      if (num == 0) return true;

      for(int i = 0; i < bits; i++){
            int leftBit  = (num >> (bits - 1 - i)) & 1;
            int rightBit = (num >> i) & 1;

            if (leftBit != rightBit)
            return false;
      }

      return 1;
}

void wonderful(int num){
    if(num % 2 != 0 && isPalindrome(num)){
      cout << "YES";
    }
    else{
      cout << "NO";
    }
}

int main(void)
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int n = 1;
      // cin >> n;
      int X;
      cin >> X;
      
      while (n--)
      {
            wonderful(X);
      }

      return 0;
}
