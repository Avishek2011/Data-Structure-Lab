#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a[100],od=0,ev=0;

    cin>> n;

    for(i=0; i<n; i++)
    {
        cin>> a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] % 2 == 0)

        {
            ev = a[i];
            cout << "Even :" << ev <<endl;

        }


        else if(a[i] % 2 != 0)
        {
            od = a[i];
            cout << "Odd :" << od <<endl;
        }
    }
}
