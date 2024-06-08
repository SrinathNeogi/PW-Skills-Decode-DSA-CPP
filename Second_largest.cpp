#include<iostream>
#include <climits>
using namespace std;

int Arr_second_max(int *arr, int *n);

int main()
{
    int size;

    cout<<"Enter size of the Array -> ";
     cin>>size;

    int Arr[size];

    cout<<endl<<"Second largest element = "<<Arr_second_max(Arr, &size)<<endl;
}

int Arr_second_max(int *arr, int *n)
{
    int i, j, k;
    int max = INT_MIN;
    int Second_max = INT_MIN;
    
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

    for(k=0; k<*n; k++)
    {
        if(arr[k] > Second_max && arr[k] != max)
        {
            Second_max = arr[k];
        }
    }

    return Second_max;
}
