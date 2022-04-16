#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
void intersection(int p[],int n1,int q[],int n2,int r[])
{
    int max1=max(p,n1);
    int max2=max(q,n2);
    int *a=new int[max1+1];
    int *b=new int[max2+1];
    for(int i=0;i<max1+1;i++)
    a[i]=0;
    for(int i=0;i<max2+1;i++)
    b[i]=0;
    for(int i=0;i<n1;i++)
    a[p[i]]++;
    for(int i=0;i<n2;i++)
    b[q[i]]++;
    int k=0;
    for(int i=0;i<max1+1;i++)
    {
        if(a[i]!=0 && b[i]!=0)
        r[k++]=i;
    }
    cout<<"List of common elements: ";
    for(int i=0;i<k;i++)
    cout<<r[i]<<" ";
    cout<<endl;
}
int main()
{
    int t,n1,n2,n3;
    int *p,*q,*r;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        
        cout<<"Enter no of elements in array1"<<endl;
        cin>>n1;
        p=new int[n1];
        cout<<"Enter elements in array1"<<endl;
        for(int i=0;i<n1;i++)
        cin>>p[i];
        cout<<"Enter no of elements in array2"<<endl;
        cin>>n2;
        q=new int[n2];
        cout<<"Enter elements in array2"<<endl;
        for(int i=0;i<n2;i++)
        cin>>q[i];
        if(n1<n2)
        n3=n1;
        else
        n3=n2;
        r=new int[n3];
        intersection(p,n1,q,n2,r);
    }
    return 0;
}