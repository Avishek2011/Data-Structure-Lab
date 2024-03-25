// Bubble sort
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a[100],n,temp=0;

    cout << "Number of elements -" << endl;
    cin >> n;

    cout << "Write the elements of Array :" << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }


    cout << "Processing Bubble Sorting....." << endl;
    for(i=0;i<n-1;i=i+1)
    {
        for(j=0;j<n-i-1;j=j+1)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
     for(i=0;i<n;i++)
     {
         cout<< a[i] << endl;

     }
     return 0;

}
