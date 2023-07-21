#include<stdio.h>
#include<stdlib.h>
int Smallest(int *a,int *n)
{
    int i,s=a[0];
    for(i=0;i<*n;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    return s;
}
int main()
{
    int *ptr;
    int n,i,s;
    int *p;
    p=&n;
    printf("Enter the number of elements:");
    scanf("%d",p);
    ptr=(int*)calloc(*p,sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<*p;i++)
    {
        scanf("%d",&ptr[i]);
    }
    s=Smallest(ptr,p);
    printf("Smallest= %d",s);
    free(ptr);
    return 0;
}