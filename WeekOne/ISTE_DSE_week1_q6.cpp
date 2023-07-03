#include<iostream>
using namespace std;
void sort_fn(int a[],int n,string s)
{
    int temp,i,j,min,k,curr;
    if (s=="bubble")
    {
        for(j=0;j<n;j++)
        {
            for(i=0;i<n-j;i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
    }
    else if(s=="selection")
    {
        for(i=0;i<n;i++)
        {
            min=a[i];
            k=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<min)
                {
                    min=a[j];
                    k=j;
                }
            }
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;

        }
    }
    else if(s=="insertion")
    {
        for(i=1;i<n;i++)
        {
            curr=a[i];
            for(j=i-1;a[j]>curr && j>=0;j--)
            {
                a[j+1]=a[j];
            }
            a[j+1]=curr;
        }

    }


 }
 

int main(){
    int n,i;
    string s;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl<<"Enter the elements: ";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Enter sorting method: ";
    cin>>s;
    cout<<endl;
    sort_fn(a,n,s);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;

}