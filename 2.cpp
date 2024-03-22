#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,n,x,a[100],i;
    cin>> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] > l)
        {
            l = a[i];
        }
    }
    cout << l <<endl;
    return 0;

}
