#include<stdio.h>
#define Max_size 100
int main()
{
    int arr[Max_size];
    int n,i,l=0,sl=0;
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl)
        {
            sl=arr[i];
        }
    }
    printf("second largest= %d",sl);
    return 0;

}