//Copy content of an array into another array in reversed order.
#include<iostream>
#include<vector>
using namespace std;

void reversed_array(vector<int> &a);

int main()
{
    int size;
    vector<int> v;

    cout<<"Enter size of the vector : ";
     cin>>size;
    
    for(int i=0; i<size; i++)
    {
        int x;

        cout<<"Enter "<<i<<" index element : ";
         cin>>x;

        v.push_back(x);
    }

    reversed_array(v);
}

void reversed_array(vector<int> &a)
{
    vector<int> rev(a.size());
    int index = 0;

    for(int i=(a.size()-1); i>=0; i--)
    {
        rev[index] = a.at(i);
        index++;
    }

    cout<<"New array with reversed element of previous array : ";

    for(int i=0; i<rev.size(); i++)
    {
        cout<<rev.at(i)<<" ";
    }
}
