#include<stdio.h>
#include<stdlib.h>
#define max 100
int **Matmul(int m,int n,int p,int q, int **a,int **b)
{
    int **c;
    int i,j,k;
    c=(int**)calloc(m,sizeof(int));
    for(i=0;i<m;i++)
        c[i]=(int*)calloc(q,sizeof(int));
    if (n!=p)
    {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            *(*(c+i)+j)=0;
            for(k=0;k<n;k++)
            {
                *(*(c+i)+j)+= *(*(a+i)+k)**(*(b+k)+j);
               
            }   
        }
    }
    return c;
}
int main()
{
    int m,n,p,q,i,j;
    int **a,**b,**c;
    printf("Enter dimensions of first matrix: \n");
    scanf("%d %d",&m,&n);
    printf("Enter dimensions of second matrix:\n");
    scanf("%d %d",&p,&q);
    printf("Enter elements of first matrix:\n");
    a=(int**)calloc(m,sizeof(int));
    for(i=0;i<m;i++)
        a[i]=(int*)calloc(n,sizeof(int));
    b=(int**)calloc(p,sizeof(int));
    for(i=0;i<p;i++)
        b[i]=(int*)calloc(q,sizeof(int));
    c=(int**)calloc(m,sizeof(int));
    for(i=0;i<m;i++)
        c[i]=(int*)calloc(q,sizeof(int));

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    c=Matmul(m,n,p,q,a,b);
    printf("Product= \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }
    return 0;
}