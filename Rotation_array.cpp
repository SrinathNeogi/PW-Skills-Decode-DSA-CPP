//Rotation of Array by k steps.
#include<iostream>
#include<vector>
using namespace std;

void reversed_part_array(vector<int> &a, int start, int end);

void swap(int *a, int *b);

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

    int steps;

    cout<<"Enter how much steps you want to rotate : ";
     cin>>steps;

    if(steps > v.size())
    {
        steps = steps % v.size();
    }

    reversed_part_array(v,0,(v.size()-steps-1));

    reversed_part_array(v,(v.size()-steps),(v.size()-1));

    reversed_part_array(v,0,(v.size()-1));

    cout<<"Rotated Array : ";

    for(int k=0; k<v.size(); k++)
    {
        cout<<v.at(k)<<" ";
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reversed_part_array(vector<int> &a, int start, int end)
{
    while(start < end)
    {
        swap(a.at(start), a.at(end));
        start ++;
        end--;
    }
}
