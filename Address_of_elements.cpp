#include<iostream>
using namespace std;

int main()
{
    int arr[5], i;

    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    for(int j=0; j<5; j++)
    {
        cout<<"Address of "<<j<<" element is : "<<&arr[j]<<endl;
    }
}