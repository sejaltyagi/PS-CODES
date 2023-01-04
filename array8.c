#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(i!=j)
        {
        for(j=0;j<i;j++)
        {
            int t=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=t;
        }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
}