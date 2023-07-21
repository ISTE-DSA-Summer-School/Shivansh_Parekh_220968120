#include<stdio.h>
#define Max_size 100
int Add(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int a[Max_size];
    int n,i;
    printf("Enter Length of array:\n");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sum of elements: %d",Add(a,n));
    return 0;
}

