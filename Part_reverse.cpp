//Reverse a part of the array.
#include<iostream>
#include<vector>
using namespace std;

void reversed_part_array(vector<int> &a);

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

    reversed_part_array(v);
}

void reversed_part_array(vector<int> &a)
{
    cout<<"Enter Starting index of part to be reversed : ";
    int i;
     cin>>i;

    cout<<"Enter ending index of part to be reversed : ";
    int j;
     cin>>j;

    while(i < j)
    {
        swap(&a.at(i), &a.at(j));
        i++;
        j--;
    }

    /*
    Method 2

    for(int i=0, j=a.size()-1; i<=j; i++,j--)
    {
        swap(&a.at(i), &a.at(j));

    }
    */

    cout<<"Reversed Array : ";

    for(int k=0; k<a.size(); k++)
    {
        cout<<a.at(k)<<" ";
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
