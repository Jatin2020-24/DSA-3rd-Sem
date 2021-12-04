#include <iostream>
using namespace std;

int main()
{
    string n;
    int t=5;
    while (t--)
    {
        cout << "\nEnter a integer: ";
        cin >> n;
        cout << "\nLength of Integer is: ";
        if (n[0] == '-')
            cout << n.size() - 1 << endl;
        else
            cout << n.size() << endl;
    }
}