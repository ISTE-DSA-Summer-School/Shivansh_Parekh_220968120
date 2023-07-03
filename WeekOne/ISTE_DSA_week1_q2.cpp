#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
            {
                cout<<" ";
            }
        for(j=n;j>=i;j--)
        {
            
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    
}