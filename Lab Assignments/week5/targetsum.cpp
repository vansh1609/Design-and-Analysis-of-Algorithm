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
    int t,n,target;
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
        cout<<"Enter target element"<<endl;
        cin>>target;
        mergesort(p,0,n-1);
        int j=0,k=n-1;
        while(j<k)
        {
            if(p[j]+p[k]==target)
            {
                b=true;
                cout<<p[j]<<" "<<p[k]<<endl;
                break;
            }
            else if(p[j]+p[k]<target)
            j++;
            else
            k--;
        }
        if(b==false)
        cout<<"No such element exist"<<endl;
    }
    return 0;
}