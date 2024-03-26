#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,num,first=0,last,mid,n;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cin >> num;

    last = n - 1; // Initialize last to the maximum index of the array

    while (first <= last)
    {
        mid = (first + last) / 2;
        if(a[mid] == num)
        {
            cout << "found at index " << mid +1 << endl;
            return 0; // Exit the program after finding the element
        }
        else if(a[mid] < num)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    cout << "not found" << endl;
    return 0;
}
