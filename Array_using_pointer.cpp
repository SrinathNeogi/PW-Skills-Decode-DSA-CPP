#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {1,2,3,4,5};

    int *ptr = Arr;

    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<" ";
        ptr ++;
    }
}