#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    int comparisons=0,shifts=0;
    for(int i=1;i<n;i++)
    {
        int j=i-1,x=a[i];
        while(j>=0 && a[j]>x)
        {
            comparisons++;
            a[j+1]=a[j];
            shifts++;
            j--;
        }
        a[j+1]=x;
        shifts++;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Shifts: "<<shifts<<" "<<"Comparisons: "<<comparisons<<endl; 
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
        insertionsort(p,n);
    }
    return 0;
}