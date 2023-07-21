#include<stdio.h>
#define Max_size 100
int Lsearch(int arr[],int n,int elem)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (arr[i]==elem)
        {
            return i;
        }
    }
    printf("Element not found\n");
    return -1;
}
int main(){
    int a[Max_size];
    int n,i,elem;
    printf("Enter length of array: \n");
    scanf("%d",&n);
    printf("Enter elements of a new array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element to be found: ");
    scanf("%d",&elem);
    i=Lsearch(a,n,elem);
    if (i!=-1)
        printf("Positon of element: %d",i+1);
    return 0;
}