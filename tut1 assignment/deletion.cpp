#include<bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
	if (arr[i] == x)
		break;

if (i < n)
{
	n = n - 1;
	for (int j=i; j<n; j++)
		arr[j] = arr[j+1];
}

return n;
}

int main()
{
    int n,x;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be deleted: ";
    cin>>x;

	n = deleteElement(arr, n, x);

	cout << "New array is \n";
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";

	return 0;
}
