#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,pos,num,n,a[100];

    cout<< "Number of elements :" <<endl;
    cin >> n;

    cout << "The number you want to insert? :" <<endl;
    cin >> num;

    cout << "Which position do you want to insert? "<<endl;
    cin >> pos;


    cout << "Write the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(i=n;i>=pos;i--)

    {
        a[i+1] = a[i];


    }
    a[pos] = num;

    cout << "Updated elements :-"<<endl;
    for(i=0;i<n+1;i++)
    {
        cout << a[i] <<endl;
    }

    cout << "You have successfully update the elements "<<endl;
    return 0;
}
