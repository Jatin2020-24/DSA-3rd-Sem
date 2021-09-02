#include <iostream>
using namespace std;

int main()
{
    string n;
    cout << "Enter a integer: ";
    cin >> n;
    cout << "Length of Integer is: ";
    if (n[0] == '-')
        cout << n.size() - 1 << endl;
    else
        cout << n.size() << endl;
}