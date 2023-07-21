#include<stdio.h>
int Matmul(int m,int n,int p,int q, int a[m][n],int b[p][q])
{
    int c[m][q];
    int i,j,k;
    if (n!=p)
    {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+ a[i][k]*b[k][j];
               
            }
                
                
        }
    }
    printf("Product:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

    
}
int main()
{
    int m,n,p,q,i,j;
    printf("Enter dimensions of first matrix: \n");
    scanf("%d %d",&m,&n);
    printf("Enter dimensions of second matrix:\n");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q];
    printf("Enter elements of first matrix:\n");
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
    Matmul(m,n,p,q,a,b);
    return 0;
}