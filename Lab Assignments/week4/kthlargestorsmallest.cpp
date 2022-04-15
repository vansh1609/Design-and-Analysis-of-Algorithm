#include<iostream>
using namespace std;
void countsort(int a[],int n,int k)
{
    int max=a[0],x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    int *q=new int[max+1];
    for(int i=0;i<max+1;i++)
    q[i]=0;
    for(int i=0;i<n;i++)
    q[a[i]]++;
    for(int i=0;i<max+1;i++)
    {
        if(q[i]!=0)
        {
            x++;
            if(x==k)
            cout<<k<<"th smallest: "<<i<<endl;
        }
    }
    for(int i=max;i>=0;i--)
    {
        if(q[i]!=0)
        {
            y++;
            if(y==k)
            cout<<k<<"th largest: "<<i<<endl;
        }
    }
    int j=0;
    for(int i=0;i<max+1;i++)
    {
        while(q[i]!=0)
        {
            a[j++]=i;
            q[i]--;
        }
    }
}
int main()
{
    int t,n;
    int *p;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int k;
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        cout<<"Enter the value of k"<<endl;
        cin>>k;
        countsort(p,n,k);
        
        
      
    }
}