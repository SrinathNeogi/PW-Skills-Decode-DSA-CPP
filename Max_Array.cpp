#include<iostream>
#include <climits>
using namespace std;

int Arr_max(int *arr, int *n);

int main()
{
    int size;

    cout<<"Enter size of the Array -> ";
     cin>>size;

    int Arr[size];

    cout<<"Largest element = "<<Arr_max(Arr, &size);
}

int Arr_max(int *arr, int *n)
{
    int i, j;
    int max = INT_MIN;
    
    for(i=0; i<*n; i++)
    {
        cout<<"Enter the "<<i<<" index element : ";
         cin>>arr[i];
    }

    for(j=0; j<*n; j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
        }
    }

    return max;
}
