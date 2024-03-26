#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a[100],input,n;

    cout << "How many elements you want to entry ?" << endl;
    cin >> n;

    cout << "Write the elements :" << endl;

        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }

    cout << "Enter the element you are looking :"<<endl;
    cin >> input;

    for(i=0;i<n;i++)
    {
        if(input == a[i])
        {
            cout << "We found the element at position " << " " << i+1 <<endl;

            break;
        }
    }
    if(i==n){
        cout << "The element you are looking is not present " << endl;
    }
    return 0;
}
