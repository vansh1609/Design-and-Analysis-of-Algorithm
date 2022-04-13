#include<iostream>
using namespace std;
int main(){
    int t,n;
    int *p;
    cout<<"enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        bool b=false;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(p[i]+p[j]==p[k])
                    {
                        b=true;
                        cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                    }
                }
            }
        }
        if(!b)
        cout<<"No sequence found"<<endl;
    }
    return 0;
}