#include<iostream>
using namespace std;

bool linearSearch(int n, int arr[], int size)
{
    bool check=false;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            check=true;
            break;
        }
    }
    return check;
}

int main()
{
    int x,size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter number to be searched: ";
    cin>>x;
    if(linearSearch(x,arr,size))
        cout<<"Found";
    else
        cout<<"Not Found";
    return 0;
}