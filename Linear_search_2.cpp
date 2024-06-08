#include<iostream>
using namespace std;

void linear_search(int *arr, int *n);

int main()
{
    int size;

    cout<<"Enter how many numbers you want to add in Array : ";
     cin>>size;

    int Arr[size];

    linear_search(Arr, &size);
}

void linear_search(int *arr, int *n)
{
    int i, j, search = 0;

    for(j=0; j<*n; j++)
    {
        cout<<"Enter "<<j<<" index element : ";
         cin>>arr[j];
    }

    cout<<endl;

    cout<<"Enter element to be searched : ";
     cin>>search;
    cout<<endl;

    bool flag = false; //Assume element is not present initially.
    int count = 0;  //Assume element is not present , so occurance is 0.

    for(i=0; i<*n; i++)
    {
        if(arr[i] == search)
        {
            cout<<"Element "<<search<<" is present at index "<<i<<endl; 
            flag = true;
        }
    }

    if(flag == false)
    {
        cout<<"Element "<<search<<" is not present."<<endl;
    }
    
}
