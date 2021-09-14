#include <iostream>
using namespace std;

int *insertX(int n, int arr[],
			 int x, int pos)
{
	n++;
	for(int i=n-1;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=x;
	return arr;
}

int main()
{
	int n, pos, x;
	n = 5;
	pos = 3;
	x = 100;
	int arr[n] = {8, 1, 3, 5, 6};
	insertX(n,arr,x,pos);
	for(int i=0;i<n+1;i++)
		cout<<arr[i]<<endl;
	return 0;
}
