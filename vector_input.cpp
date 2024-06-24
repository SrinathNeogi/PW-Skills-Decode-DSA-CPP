#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;

    int size;
    cout<<"Enter size of vector : ";
     cin>>size;

    for(int i=0; i<size; i++)
    {
        int x;
        cout<<"Enter "<<i<<" index element : ";
         cin>>x;
        
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    cout<<"Sorted vector : ";
    for(int j=0; j<size; j++)
    {
        cout<<v.at(j)<<" ";
    }

}