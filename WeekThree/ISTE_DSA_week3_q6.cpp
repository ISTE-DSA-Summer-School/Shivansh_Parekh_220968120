#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q,i,j,k;
    cout<<"Enter dimensions of first matrix: "<<endl;
    cin>>m>>n;
    cout<<"Enter dimensions of second matrix: "<<endl;
    cin>>p>>q;
    int a[m][n],b[p][q],c[m][q];
    if (n!=p)
    {
        cout<<"Matrices cannot be multiplied."<<endl;
        return 0;
    }
    cout<<"Enter elements of first matrix: "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>*(*(a+i)+j);
        }
    }
    cout<<"Enter elements of second matrix: "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>*(*(b+i)+j);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            *(*(c+i)+j)=0;
            for(k=0;k<n;k++)
            {
                *(*(c+i)+j)+=*(*(a+i)+k) * *(*(b+k)+j);
            }
        }
    }
    cout<<"product: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<*(*(c+i)+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}