#include <iostream>
using namespace std;

int linearSearch(int n, int arr[], int size)
{
    bool check = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x, size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "\nEnter array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter number to be searched: ";
    cin >> x;
    int result = linearSearch(x, arr, size);
    if (result == -1)
        cout << "Not Found\n";
    else
        cout << "Element is found at index: " << result;
    return 0;
}