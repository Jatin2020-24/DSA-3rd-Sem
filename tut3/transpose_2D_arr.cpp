#include <iostream>
using namespace std;

int main()
{
    int a[2][2], c[2][2];
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[j][i];
        }
    }
    cout<<"\nTranspose of matrix\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
           cout <<" "<< c[i][j];
        cout <<"\n";
    }
    return 0;
}