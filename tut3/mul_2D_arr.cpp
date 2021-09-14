// Multiplication of 2D array

#include <iostream>
using namespace std;

int main()
{
    int a[2][2], b[2][2], c[2][2];
    cout << "Enter elements of 1st matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter a[" << i << "]"
                 << "[" << j << "]: ";
            cin >> a[i][j];
            cout<<endl;
        }
    }
    cout << "Enter elements of 2nd matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter b[" << i << "]"
                 << "[" << j << "]: ";
            cin >> b[i][j];
            cout<<endl;
        }
    }
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
 
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
 
            cout << c[i][j] << "\t";
        }
 
        cout << endl;
    }
    return 0;
}