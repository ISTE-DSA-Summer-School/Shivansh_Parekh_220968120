#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter number of rows: ";
    cin>>n;
    for(i=1,k=n-1;i<=n;i++,k--)
    {
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}