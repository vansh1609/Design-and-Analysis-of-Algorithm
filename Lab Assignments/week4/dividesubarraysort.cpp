#include<iostream>
using namespace std;
void merge(int a[],int l,int mid,int r,int *comparisons)
{
    int i=l,j=mid+1,k=l;
    int *b=new int[r+1];
    while(i<=mid && j<=r)
    {
        (*comparisons)++;
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
void sort(int a[],int l,int r,int *comparisons)
{
    
    for(int i=l;i<=r;i++)
    {
        int j=i+1,k=i;
        for(;j<=r;j++)
        {
            (*comparisons)++;
            if(a[j]<a[k])
            k=j;
        }
        int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
        
    }
    
}
int inversions(int a[],int n)
{
    int count=0;for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            count++;
        }
    }
    return count;
}
int main()
{
    int t,n;
    int *p;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int comparisons=0,inversion=0;
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        inversion=inversions(p,n);
        sort(p,0,(n-1)/2,&comparisons);
        sort(p,(n-1)/2+1,n-1,&comparisons);
        merge(p,0,(n-1)/2,n-1,&comparisons);
        cout<<"Sorted array: ";
        for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
        cout<<endl;
        cout<<"Comparisons: "<<comparisons<<" "<<"Inversions: "<<inversion<<endl;
    }
}