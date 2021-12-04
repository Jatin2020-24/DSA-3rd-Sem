#include <iostream>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }
    return n;
}

int main()
{
    // Input an array
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "\nEnter element to be deleted: ";
    cin >> x;
    deleteElement(arr, size, x);

    cout << "\nNew array is \n";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << " ";
    cout << "\n\n";
    return 0;
}
