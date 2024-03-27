#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream outputfile("RAND.DAT");
    srand(time(nullptr)); // Include ctime header for time(nullptr)
    if (!outputfile)
    {
        cout << "Error opening the file " << endl;
        return 1;
    }
    for (int i = 0; i < 100; i++)
    {
        int randomNum = rand() % 1000;
        outputfile << randomNum << endl;
    }
    outputfile.close(); // Close the output file properly

    ifstream inputfile("RAND.DAT");
    if (!inputfile)
    {
        cout << "Error";
        return 1;
    }
    int num;
    while (inputfile >> num)
    {
        cout << num << " ";
    }
    inputfile.close();
    return 0;
}
