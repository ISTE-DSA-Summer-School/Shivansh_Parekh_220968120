#include<iostream>
using namespace std;
int remove_duplicates(int *arr,int* n)
{
    int i,j,k;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=i+1;k<*n;k++)
                {
                    arr[k]=arr[k+1];
                }
                *n=*n-1;
                j--;
            }
        }
    }
    return *n;
}
int main()
{
    int n,i;
    int *np,*arr;
    np=&n;
    cout<<"Length of array: "<<endl;
    cin>>n;
    int a[*np];
    arr=a;
    cout<<"Enter elements of  sorted array:"<<endl;
    for(i=0;i<*np;i++)
    {
        cin>>arr[i];
    }
    n=remove_duplicates(arr,np);
    cout<<"new array: "<<endl;
    for(i=0;i<*np;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"length of new array: "<<*np<<endl;
    return 0;

}