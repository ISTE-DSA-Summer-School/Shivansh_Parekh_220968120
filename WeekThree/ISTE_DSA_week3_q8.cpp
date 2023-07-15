#include<iostream>
using namespace std;
int max_sum_subarray(int *arr,int *n)
{
    int i,max_sum=INT16_MIN,sum_here=0;
    for(i=0;i<*n;i++)
    {
        sum_here+=arr[i];
        if(sum_here>max_sum)
        {
            max_sum=sum_here;
        }
        if(sum_here<0)
        {
            sum_here=0;
        }
    }
    return max_sum;

}
int main()
{
    int n,i,sum;
    int *np,*arr,*sp;
    np=&n;
    cout<<"Length of array: "<<endl;
    cin>>n;
    int a[*np];
    arr=a;
    sp=&sum;
    cout<<"Enter elements of  sorted array:"<<endl;
    for(i=0;i<*np;i++)
    {
        cin>>arr[i];
    }
    *sp=max_sum_subarray(arr,np);
    cout<<"maximum sum of contiguous subarray = "<<*sp<<endl;
    
    return 0;
}