#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    int x;
    for (int i = 0; i < n-1; i++)
    {
        x = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[x])
            x = j;
        swap(arr[x], arr[i]);
    }
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"\nEnter elements of array: ";
    int arr[size];
    for(int i=0;i<size;i++) cin>>arr[i];
    selectionSort(arr,size);
    cout<<"Sorted array after Selection Sort: ";
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}