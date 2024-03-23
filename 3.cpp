#include<bits/stdc++.h>
using namespace std;

void calroot(double a,double b, double c)
{
    double root1,root2;
    double  d = b*b - 4*a*c;


    if(d > 0)
    {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);

        cout << root1 << " "<<root2 << endl;
    }

    else if(d == 0)
    {
        root1 = root2 = -b / (2*a);

        cout << root1 << endl;
    }

    else
    {
        double realpart,imgpart;

        realpart= -b / (2*a);
        imgpart = sqrt(-d)/ (2*a);

        cout << "root1 : " << realpart <<  " + " << "i"<< imgpart << endl;
        cout << "root2 : " << realpart <<  " - " << "i"<< imgpart << endl;
    }


}



int main()
{
   double a,b,c;

   cin >> a >>b >> c;
   calroot(a,b,c);
   return 0;
}
