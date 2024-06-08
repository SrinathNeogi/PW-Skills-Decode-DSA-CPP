#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,34,5,6,7,3,5,6,2,0,45,};

    int size = (sizeof(arr))/(sizeof(arr[0]));

    cout<<"Size of Array = "<<size;
}