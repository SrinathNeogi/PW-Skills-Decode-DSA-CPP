//Leetcode 1, return doublets of indices of target sum.
#include<iostream>
#include<vector>
using namespace std;

void index_sum(vector<int> &a);

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

    cout<<"Doublets are : "<<endl;

    index_sum(v);

}

void index_sum(vector<int> &a)
{
    vector<int> index(2);

    int target;

    cout<<"Enter target : ";
     cin>>target;

    for(int i=0; i<(a.size()-1); i++)
    {
        for(int j=i+1;j<(a.size()); j++)
        {
            if((a.at(i) + a.at(j)) == target)
            {
                index.push_back(i);
                index.push_back(j);
                cout<<"( "<<i<<" , "<<j<<" )"<<endl;
            }
        }
    }
}
