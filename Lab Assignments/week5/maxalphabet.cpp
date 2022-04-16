#include<iostream>
using namespace std;
void countarray(char c[],int n)
{
    char ch;
    int *p=new int[128];
    for(int i=0;i<128;i++)
    p[i]=0;
    for(int i=0;i<n;i++)
    p[c[i]]++;
    int max=-1;
    for(int i=0;i<128;i++)
    {
        if(p[i]>max){
        max=p[i];
        ch=(char)i;
        }
    }
    if(max==1)
    cout<<"No duplicates present"<<endl;
    else
    cout<<ch<<"-"<<max<<endl;

    
}
int main(){
    int t,n;
    char *c;
    cout<<"Enter no of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter no of characters"<<endl;
        cin>>n;
        c=new char[n+1];
        cout<<"Enter characters"<<endl;
        for(int i=0;i<n;i++)
        cin>>c[i];
        countarray(c,n);
    }
}