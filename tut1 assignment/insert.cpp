#include <iostream>
using namespace std;

int *insertX(int n, int arr[],
			 int x, int pos)
{
	n++;
	for (int i = n - 1; i >= pos; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[pos - 1] = x;
	return arr;
}

void outArr(int size, int arr[])
{
	for (int i = 0; i < size + 1; i++)
		cout << arr[i] << " ";
}

int main()
{
	// Input an array
	int size, choice;
	cout << "Enter size of array: ";
	cin >> size;
	int arr[size];
	cout << "Enter elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Insertion of an Element:\n";
	int pos, x;
	cout<<"\n1. At Begining\n2.At End\n3.At Middle"<<endl;
	cin>>choice;
	switch (choice)
	{
	case 1:
	{
		cout<<"Inserting at Begining\n",
		cout << "\nEnter new element: ";
		cin >> x;
		insertX(size, arr, x, 1);
		outArr(size, arr);
		break;
	}
	case 2:
	{
		cout<<"Inserting at End\n",
		cout << "\nEnter new element: ";
		cin >> x;
		insertX(size, arr, x, size+1);
		outArr(size, arr);
		break;
	}
	case 3:
	{
		cout<<"Inserting at Middle\n";
		cout << "\nEnter position of element: ";
		cin >> pos;
		cout << "\nEnter new element: ";
		cin >> x;
		insertX(size, arr, x, pos);
		outArr(size, arr);
		break;
	}
}
return 0;
}
