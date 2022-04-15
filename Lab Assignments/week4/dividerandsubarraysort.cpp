#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void merge(int a[],int b[],int c[],int n1,int n2,int *comparisons)
{
    int i=0,j=0,k=0;
    
    while(i<n1 && j<n2)
    {
        (*comparisons)++;
        if(b[i]<c[j])
        a[k++]=b[i++];
        else
        a[k++]=c[j++];
    }
    while(i<n1)
    a[k++]=b[i++];
    while(j<n2)
    a[k++]=c[j++];
}
void sort(int a[],int n,int *comparisons,int *swaps)
{
    
    for(int i=0;i<n;i++)
    {
        int j=i+1,k=i;
        for(;j<n;j++)
        {
            (*comparisons)++;
            if(a[j]<a[k])
            k=j;
        }
        int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
        (*swaps)++;
        
    }
    
}

int main()
{
    int t,n;
    int *p,*q,*r;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int comparisons=0,inversion=0,x=0,y=0,swaps=0;
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        q=new int[n];
        r=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        
        srand(time(NULL));
        int pivot=rand()%(n);
        for(int i=0;i<n;i++)
        {
            if(p[i]<pivot)
            q[x++]=p[i];
            else
            r[y++]=p[i];
        }
        sort(q,x,&comparisons,&swaps);
        sort(r,y,&comparisons,&swaps);
        merge(p,q,r,x,y,&comparisons);
        cout<<"Sorted array: ";
        for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
        cout<<endl;
        cout<<"Comparisons: "<<comparisons<<" "<<"Swaps: "<<swaps<<endl;
    }
}