#include <bits/stdc++.h>
using namespace std;

int binarySearch(int low, int high, int arr[], int n)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == n)
            return mid;
        if (arr[mid] > n)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int size, n;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << endl;
    int arr[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << endl;
    cout << "Enter number: ";
    cin >> n;
    int result = binarySearch(0, size - 1, arr, n);
    if (result == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << result << endl;

    return 0;
}