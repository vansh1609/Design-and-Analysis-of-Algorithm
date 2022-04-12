#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,n,key,comparisons,index;
    int *p;
    bool b=false;
    cout<<"Enter number of test cases";
    cin>>t;
    cout<<endl<<endl;
    while(t--)
    {
        b=false;
        comparisons=0;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        p=new int[n];
        cout<<"Enter elements of array"<<endl;
        for(int i=0;i<n;i++)
            cin>>p[i];
        cout<<"Enter key to search"<<endl;
        cin>>key;
         int j=0,x=1,y=0;
         while(j<n)
         {
             comparisons++;
             if(p[j]==key)
             {
                 b=true;
                 break;
             }
             else if(p[j]>key)
             {
                 for(int l=y+1;l<j;l++)
                 {
                     comparisons++;
                     if(p[l]==key)
                     {
                         b=true;
                         break;
                     }
                 }
             }
             if(j==n-1)
             break;
             y=j;
             if(pow(2,x)<n)
             j=pow(2,x++);
            else
            j=n-1;
         }
         b?cout<<"Present ":cout<<"Not present ";
         cout<<comparisons<<endl;
    }
    return 0;
}