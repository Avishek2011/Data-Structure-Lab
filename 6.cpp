#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a[100],pos;

    cout<< "How many elements :" << endl;
    cin >> n;

    cout << "Write the elements " <<endl;
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }

    cout << "which position you want to delete ? " << endl;
    cin >> pos;

    for(i=pos-1;i<n;i=i+1)
    {
        a[i] = a[i+1];
    }
   // a[pos] = a[i];

    cout << "Processing...." << endl;

    for(i=0;i<n-1;i=i+1)
    {
        cout << a[i] << " "  << endl;
    }

    cout << "You have successfully delete the position" << endl;

    return 0;


}
