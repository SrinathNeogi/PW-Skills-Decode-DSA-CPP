/*
Move all positive numbers to the last and all negative number to the beginning. No need to sort.
*/
#include<iostream>
#include<vector>
using namespace std;

void sort_0_1(vector<int>&a,int *size);

int main()
{
    int size;

    cout<<"Enter size of the Array : ";
     cin>>size;

    vector<int>v;

    cout<<"Enter Array."<<endl;

    for(int j=0; j<size; j++)
    {
        int x; 

        cout<<"Enter "<<j<<" index element : ";
         cin>>x;
        
        v.push_back(x);
    }

    sort_0_1(v,&size);

}

void sort_0_1(vector<int> &a,int *size)
{
    int i = 0, j = (*size-1);

      while(i < j)
    {
        if(a.at(i) < 0)
        {
            i++;
        }
        if(a.at(j) > 1)
        {
            j--;
        }
        
        else if(a.at(i) >0 && a.at(j) < 0) 
        //-> This will also run fine. As this swap condition only works only when the first two will not be executed.
        {
            int temp = a.at(i);
            a.at(i) = a.at(j);
            a.at(j) = temp;
            i++, j--;
        }
    }

    cout<<"Sorted Array : ";

    for(int k=0; k<*size; k++)
    {
        cout<<a.at(k)<<"    ";
    }
}