#include<iostream>
using namespace std;

int sum(int *arr, int *n);

int main()
{
    int size;

    cout<<"Enter how many numbers you want to add : ";
     cin>>size;

    int Arr[size];

    cout<<"Sum = "<<sum(Arr, &size); //when array is passed in calling function. Its address is passed .

}

int sum(int *arr, int *n)
{
    int i, j, sum = 0;

    for(i=0; i<*n; i++)
    {
        cout<<"Enter "<<i<<" index element : ";
         cin>>arr[i];
    }

    sum = ((*n)*(*n+1))/2;

    return sum;
}
