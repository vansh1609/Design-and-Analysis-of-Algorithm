#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    int swaps=0,comparisons=0;
    for(int i=0;i<n-1;i++)
    {
        int j=i+1,k=i;
        for(;j<n;j++)
        {
            comparisons++;
            if(a[j]<a[k])
            k=j;
        }
        int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
        swaps++;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Swaps: "<<swaps<<" "<<"Comparisons: "<<comparisons<<endl;
}
int main()
{
    int t,n;
    int *p;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements in array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        selectionsort(p,n);
    }
    return 0;
}