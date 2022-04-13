#include<iostream>
#include<cmath>
using namespace std;
int main(){
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
        cout<<"Enter key"<<endl;
        cin>>key;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(p[i]-p[j])==key)
                count++;
            }
        }
        cout<<"No of pairs: "<<count<<endl;
    }
    return 0;
}