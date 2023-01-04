#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2==0)
    {
        for(int i=0;i<n-1;i+=2)
        {
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
         for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    }
    else
    {
        for(int i=0;i<n-2;i+=2)
        {
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
         for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    }
}