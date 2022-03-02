#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,n,key,comparisons,index;
    int *p;
    bool b=false;
    cout<<"Enter number of test cases";
    cin>>t;
    cout<<endl<<endl;
    while(t--)
    {
        comparisons=0;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
            cin>>p[i];
        cout<<"Enter key to search"<<endl;
        cin>>key;
        for(int i=0;i<n;i++)
        {
            comparisons++;
            if(key==p[i])
            {
                b=true;
                index=i;
                break;
            }
        }
        if(b==true)
            cout<<"Key found at index "<<index<<endl;
        else
            cout<<"Key not found"<<endl;
        cout<<"Number of comparisons = "<<comparisons<<endl<<endl;

    }

}