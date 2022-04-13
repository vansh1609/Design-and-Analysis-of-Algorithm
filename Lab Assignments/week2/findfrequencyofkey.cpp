#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==key)
        return mid;
        else if(key>a[mid])
        l=mid+1;
        else
        r=mid-1;
    }
    return -1;
}
int main()
{
    int t,n,key;
    int *p;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter no of elements in array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
        cin>>p[i];
        cout<<"Enter key to search"<<endl;
        cin>>key;
        int index=binarySearch(p,n,key);
        if(index==-1)
        {
            cout<<"Element not found"<<endl;
            break;
        }
        else
        {
            int count=1,x=index-1,y=index+1;
            while(p[x]==key)
            {
                count++;
                x--;
            }
            while(p[y]==key)
            {
                count++;
                y++;
            }
            cout<<key<<"-"<<count<<endl;
        }
    }
    return 0;
}