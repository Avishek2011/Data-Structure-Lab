#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool>isPrime(n+1,true);

    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            cout << i << " ";

            for(int j = i*i;j<=n;j=j+i)
                isPrime[j] = false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    if(n<=1 || n>=(1 << 15))
       {
           cout << "Invalid value";
       }
       else
        {
            cout << "prime number from 1 to n are :";
            sieve(n);
        }
    return 0;
}
