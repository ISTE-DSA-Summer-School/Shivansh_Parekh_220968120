#include<stdio.h>
#define Max 100
void Reverse(int *a,int *n)
{
    int i,t;
    for(i=0;i<(*n)/2;i++)
    {
        t=a[i];
        a[i]=a[*n-i-1];
        a[*n-i-1]=t;
    }
}
int main()
{
    int a[Max];
    int n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter of elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *np;
    int *ap;
    np=&n;
    ap=a;
    Reverse(ap,np);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}