#include<iostream>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int i=l,j=mid+1,k=l;
    int *b=new int[r+1];
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    while(i<=mid)
    b[k++]=a[i++];
    while(j<=r)
    b[k++]=a[j++];
    for(int x=l;x<k;x++)
    a[x]=b[x];

}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
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
        bool b=false;
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements in array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        mergesort(p,0,n-1);
        
        for(int i=0;i<n-1;i++)
        {
            if(p[i]==p[i+1])
            {
                b=true;
                break;
            }
        }
        b?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}