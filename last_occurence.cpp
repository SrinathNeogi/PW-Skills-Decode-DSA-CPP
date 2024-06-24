//Method 1. Loop from start to end.
#include<iostream>
#include<vector>
using namespace std;

void last_occurence(vector<int> &v);

int main()
{
    int size;

    cout<<"Enter size of the vector : ";
     cin>>size;

    vector<int> v;

    for(int i=0; i<size; i++)
    {
        int x;

        cout<<"Enter "<<i<<" index element : ";
         cin>>x;

        v.push_back(x);
    }

    last_occurence(v);
}

void last_occurence(vector<int> &v)
{
    int count = 0;

    int element;

    cout<<"Enter element to search : ";
     cin>>element;

    for(int i=0; i<v.size(); i++)
    {
        if(v.at(i) == element)
        {
            count++;
        }
    }

    cout<<"Last occurence of element "<<element<<" is at index : "<<count;
}
